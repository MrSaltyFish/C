// Anvesh Khode
// 4a - Create a class student with two member functions,
// get details and display details and

#include <iostream>

using namespace std;

class Complex
{
private:
  int real;
  int imaginary;

public:
  Complex(){};
  Complex(int real, int imaginary) : real(real), imaginary(imaginary) {}

  Complex add(const Complex &other)
  {
    Complex result;
    result.real = real + other.real;
    result.imaginary = imaginary + other.imaginary;
    return result;
  }

  void display()
  {
    cout << real << " + " << imaginary << "i" << endl;
  }
};

int main()
{
  Complex number1(1, 2);
  Complex number2(3, 4);
  Complex result = number1.add(number2);
  cout << "The sum of the two complex numbers is: ";
  result.display();
  return 0;
}