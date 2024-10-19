#pragma once
#include "BinomialTreeModel02.h"
namespace fre {
class Call
  {
    private:
      int N;
      double K;
    public:
      Call() :N(0), K(0) {} // default constructor
      Call(int N_, double K_) : N(N_), K(K_) {} // parameter constructor
      Call(const Call& call) : N(call.N), K(call.K) {} // copy constructor
      ~Call() {} // destructor
      int GetN() const { return N; }
      double Payoff(double z) const; 
  };

class OptionCalculation
  {
  private:
    Call* pOption;
    OptionCalculation() : pOption(0) {} // default constructor
    OptionCalculation(const OptionCalculation& optionCalculation) : pOption(optionCalculation.pOption) {} // copy constructor
  public:
    OptionCalculation(Call* pOption_) : pOption(pOption_) {} // parameter constructor
    ~OptionCalculation() {} // destructor
    double PriceByCRR(const BinomialTreeModel& Model);
  };
}