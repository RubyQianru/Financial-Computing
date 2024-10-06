#include <iostream>
using namespace std;

class Account {
  private:
    char *name;
    double balance;
    unsigned int id;
  public:
    Account();
    Account(const Account &a);
    Account(char * const person);
    ~Account(); // Deconstructor: automatically invoke when out of scope.
};


Account::Account()
{
}

Account::Account(const Account &a)
{
  name = new char[strlen(a.name)+1]; 
  strcpy (name, a.name);
}

Account::Account(char *const person)
{
  name = new char[strlen(person)+1];
  strcpy (name, person);
}

Account::~Account()
{
  if (name != NULL){
    delete[] name;
  }
}

class Rectangle
{
private:
  int width;
  int length;

public:
  Rectangle();                   // Overloaded function
  Rectangle(int w, int l);       // Constructor with parameters
  Rectangle(const Rectangle &r); // Copy constructor
  void set(int w, int l);
  int area() const
  {
    return width * length;
  }
};

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(int w, int l)
{
}

Rectangle::Rectangle(const Rectangle &r)
{
}

void Rectangle ::set(int w, int l)
{ // Member function definition outside class scope
  // :: scope operator
  width = w;
  length = l;
}

int main() {
  // static allocated
  Rectangle r1;
  r1.set(5, 8);
  Rectangle *ptr = nullptr;
  ptr = &r1;
  ptr -> set(8,10);

  // dynamic allocated
  Rectangle *ptr2 = nullptr;
  ptr2 = new Rectangle(); // Dynamic allocated object has no name, only accessible by the pointer
  ptr -> set(80,100);
  delete ptr2;
  ptr2 = nullptr;

  // create accounts using dynamic allocation.
  cust[4] = {'J', 'O', 'E'};
  Account a1;
  Account a2(cust);
  Account a3(a2);

  return 0;
}

// Destructor automatically called. 
// ~Account() for a3.
// ~Account() for a2.
// ~Account() for a1.

