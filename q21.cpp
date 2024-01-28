#include <iostream>
using namespace std;

class NumberReverser {
public:
  int number, reverse;
  void input() {
    cout << "Enter a 3-digit number: ";
    cin >> number;
  };
  void reverseNumber() {
    reverse = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 100);
  };
  void display() {
    cout << "Reversed number: " << reverse << endl;
  };
};

int main() {
  NumberReverser numRev;
  numRev.input();
  numRev.reverseNumber();
  numRev.display();
  return 0;
}