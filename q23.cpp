#include <iostream>
using namespace std;

class SumOfDigits {
public:
  int number, sum;
  void input() {
    cout << "Enter a 4-digit number: ";
    cin >> number;
  };
  void calculateSum() {
    sum = (number % 10) + (number / 1000);
  };
  void display() {
    cout << "Sum of first and last digit: " << sum << endl;
  };
};

int main() {
  SumOfDigits sumDigits;
  sumDigits.input();
  sumDigits.calculateSum();
  sumDigits.display();
  return 0;
}