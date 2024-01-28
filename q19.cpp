#include <iostream>
using namespace std;

class TimeConverter {
public:
  int days, years, months, weeks, leftDays;
  void input() {
    cout << "Enter number of days: ";
    cin >> days;
  };
  void convert() {
    years = days/365;
    int remainingDays = days % 365;
    months = remainingDays/30;
    weeks = (remainingDays % 30)/7;
    leftDays = (remainingDays % 30) % 7;
  };
  void display() {
    cout << "Years: " << years << endl;
    cout << "Months: " << months << endl;
    cout << "Weeks: " << weeks << endl;
    cout << "Left days: " << leftDays << endl;
  };
};

int main() {
  TimeConverter timeConv;
  timeConv.input();
  timeConv.convert();
  timeConv.display();
  return 0;
}