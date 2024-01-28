#include <iostream>
using namespace std;

class ProductCalculator {
public:
  float num1, num2;
  double product;
  void input() {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
  };
  void calculate() { product = static_cast<double>(num1) * static_cast<double>(num2); };
  void display() { cout << "Product: " << product << endl; };
};

int main() {
  ProductCalculator calc;
  calc.input();
  calc.calculate();
  calc.display();
  return 0;
}