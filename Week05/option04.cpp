#pragma once
#include <iostream>
#include <cmath>
#include "Option04.h"
#include "BinomialTreeModel02.h"
using namespace std;
namespace fre {
  double Call::Payoff(double z) const
  {
    if (z > K) return z - K;
    return 0.0;
  }

  double OptionCalculation::PriceByCRR(const BinomialTreeModel& Model)
  { 
    double optionPrice = 0.0;
    double q = Model.RiskNeutProb();
    int N = pOption->GetN();
    double* pPrice = new double[N + 1];
    memset(pPrice, 0, N + 1);
    for (int i = 0; i <= N; i++)
    { 
      pPrice[i] = pOption->Payoff(Model.CalculateAssetPrice(N, i)); 
    }
    for (int n = N - 1; n >= 0; n--)
    {
      for (int i = 0; i <= n; i++)
      { pPrice[i] = (q * pPrice[i + 1] + (1 - q) * pPrice[i]) / Model.GetR(); }
    }
    optionPrice = pPrice[0]; // Copy the first value
    delete [] pPrice; // Free memory
    pPrice = nullptr;
    return optionPrice; // Return the fist value
  }
}