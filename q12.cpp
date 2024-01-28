#include <iostream>
using namespace std;

class NumberSwapper {
public:
  int num1, num2;
  void input() {
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
  };
  void swap() {
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
  };
  void display() {
    cout << "Numbers after swap -\nFirst number: " << num1 << "\nSecond number: " << num2 << endl;
  };
};

int main() {
  NumberSwapper numSwap;
  numSwap.input();
  numSwap.swap();
  numSwap.display();
  return 0;
}