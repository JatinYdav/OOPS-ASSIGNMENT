#include <iostream>
using namespace std;

class SimpleInterestCalculator {
public:
  float principle, rate, time, interest;
  void input() {
    cout << "Enter principle amount: ";
    cin >> principle;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period: ";
    cin >> time;
  };
  void calculateInterest() {
    interest = (principle * rate * time) / 100;
  };
  void display() {
    cout << "Simple Interest: " << interest << endl;
  };
};

int main() {
  SimpleInterestCalculator interestCalc;
  interestCalc.input();
  interestCalc.calculateInterest();
  interestCalc.display();
  return 0;
}