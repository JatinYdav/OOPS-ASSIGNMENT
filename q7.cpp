#include <iostream>
using namespace std;

class Calculator {
public:
  int dividend, divisor, quotient, remainder;
  void input() {
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;
  };
  void calculate() {
    quotient = dividend / divisor;
    remainder = dividend % divisor;
  };
  void display() {
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
  };
};

int main() {
  Calculator calc;
  calc.input();
  calc.calculate();
  calc.display();
  return 0;
}