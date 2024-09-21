#include<iostream>
using namespace std;

int calSum(int a, int& b, int *c);
void mySwap(int *val1, int *val2);

int main() {
  double dPrice = 21.68;
  // &: Address operator / Reference operator
  double *dPtr = &dPrice; // dPtr is the pointer to the double dPrice.
  cout<<"dPtr: "<<dPtr<<endl; 
  cout<<"*dPtr: "<<*dPtr<<endl;

  int iArray[] = {2, 4, 6};
  cout<<"iArray: "<<iArray<<endl;
  cout<<"iArray[0]: "<<iArray[0]<<endl;
  cout<<"*iArray: "<<*iArray<<endl;

  int *arrayPtr = iArray;
  cout<<"arrayPtr: "<<arrayPtr<<endl;
  cout<<"arrayPtr[1]: "<<arrayPtr[1]<<endl;
  cout<<"*(arrayPtr+1): "<<*(arrayPtr+1)<<endl;

  cout<<"*(iArray+1): "<<*(iArray+1)<<endl; 
  //cout<<"*(++iArray): "<<*(++iArray)<<endl; //iArray is a constant pointer. Address cannot be changed.

  arrayPtr += 2;
  cout<<"Now they are two integers apart: "<<arrayPtr - iArray<<endl; 

  // Call by pointer
  int a = 3;
  int b = 5;
  int c = 10;
  cout<<"sum: "<<calSum(a, b, &c)<<endl;
  mySwap(&a, &b);
  cout<<"swap: "<<"a = "<<a<<"b = "<<b<<endl;

  // Pointers to Constant
  const double dTaxRates[] = {0.1, 0.2, 0.4, 0.5}; // dTaxRate is a constant pointer to constant.
  const int *ptrToConstant = dTaxRates;

  // Dynamic Allocation
  double *hPtr = NULL;
  hPtr = new double; // Allocate a double memory space on heap at runtime.
  *hPtr = 23.45;
  delete hPtr; // Return the allocated memory to OS. Prevent memory leak.
  //*hPtr = 64.25; // Undefined behavior.
  hPtr = NULL; // Prevent pointer dangling.

  double *arrayPtr = new double[5];
  delete []arrayPtr;

  return 0;
  
}

int calSum(int a, int& b, int *c){
  a++;
  b++;
  (*c)++; // Dereference 
  return a+b+*c;
}

void mySwap(int *val1, int *val2){
  int temp = 0;
  temp = *val1;
  *val1 = *val2;
  *val2 = temp;
}