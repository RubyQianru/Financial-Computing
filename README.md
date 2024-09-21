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

- Validation condition: S(0) > 0, u > d > 0 
- Call Payoff: (S(N,i), k)

# Week 02
## C++




