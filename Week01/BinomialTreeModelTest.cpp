#include<iostream>
#include<cmath>
using namespace std;

  // S(n, i) = S(0) * (u)^i * (d)^(n-i)
  // N: Expiration
  // n: 0 -> N StEP
  // i: Index

int main() {
  // 遍历binomial tree
  double S0 = 106.00;
  double u = 1.15;
  double d = 0.86;
  int N = 8;
  int index = 0;

  for (int n = 0; n <= N; n += 1) {
    for (int i = 0; i <= n; i += 1) {
      double price =  S0*pow(u,i)*pow(d,n-i);
      cout << "Asset Price at binomial Tree model" << n ;
      cont << fixed << setprecision(2) << "S(n,i)" << price << endl;
      prices[index++] = price
    }
  }

  return 0;
}