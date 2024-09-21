# Week 01
## C++ 
### I/O Object: input / output operator 
* For I/O objects, such as cout, cin present in container namespace std.

```cpp
using namespace std;
cout<<"Hello world"<<endl;
```
or
```cpp
std::cout<<"Hello world"<<std::endl;
```
### Main function 
* Every C++ program must have a main() function.
* Return 0: everything okay!

### Build
* Compile: grammmer / synctax check -> convert texct to binary codes
* Link: integrate library object / function to your program to create one excecutable.

### Loop
* Post incrementation: i++
* Pre incrementation: ++i

### Python Data Structure
* Numpy array: O(1), homogenous
* List (Python build-in): O(n), heterogenous 

### Undefined Behavior
* There is NO boundary check.

### Divide and Conquer
* Function declaration in header fil: function names, parameter lists, return types. NO function body.
* Function definition in CPP file.
* Main() function for function invoking.

### & Call by Reference VS Call by Value
* Call by Value: passing arguments to a function **copies** the actual value of an argument into the parameter of the function. Changes made to the parameter inside the function will not change the argument. 
* Call by Reference: a reference variable is an alias, another name for an already exisiting variable. Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the same variable. Changes made to the parameter inside the function have also change the argument.
```cpp
	int ValidateInputData(const double& S0, const double& U, const double& D, const double& R);
  // Reference to const
```
* Reference to const: **Read-only call by reference

## Binomial Tree Model
S(n, i) = S(0) * (u)^i * (d)^(n-i)
N: Expiration
n: 0 -> N StEP
i: Index

* Validation condition: S(0) > 0, u > d > 0 
* Call Payoff: (S(N,i), k)

# Week 02
## C++
* Pointer
* Inheritance, especially with polymorphism
* Templates, especially with STL libraries
### Unsigned Integer
* Integer 0 or greater
```c++
#include <iostream>
using namespace std;
for (unsigned int i = 0; i < 10; i += 1) {
  cout<<i<<endl;
}
```
### Makefile
* .o: Objectify
* C++ source code ->
* Compile: translate the source code to objectify (binary form) -> 
* Link: Integrate all objective files and related C++ libraries into one standalone executable file. ->
* Clean: Remove all objective files and executable files.

### Address Operator
* Each variable in a program is stored at a unique address in memoery.
* &: Reference operator
```c++
#include <iostream>
using namespace std;
double dPrice = 21.68;
count <<&dPrice<<endl; // address in hexadecimal
```

### Memory
* Operating System
* Heap
* Stack: for storing variables created by user program.
* Address Space
* Executable

### Pointer
* Dynamic allocation
* *Operator: indirect operator. Get the value of the address pointed by the pointer 

### Array & Pointer
* Array name is associated with starting address of the array. Array name is a pointer with restriction.
* Array name can be used as a pointer constant.
* Pointer can be used as an array name.

### Comparing pointers
```cpp
#include<iostream>
using namespace std;

if (*ptr1 == *ptr2) {
  //....
}
```

### Call by Pointer
* Works like a reference parameter to allow change to argument from within function. 
* A pointer parameter musst be explicitly dereferenced to access the contents at that address.

### Pointers to Constants and Constant Pointers
* Pointer to a constant: cannot change the value that is pointed at. 
* Constant pointer: address in pointer cannot change once a pointer is initialized.