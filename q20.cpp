#include <iostream>
using namespace std;

class TimeConverter {
public:
  int seconds, hours, minutes, remainingSeconds;
  void input() {
    cout << "Enter number of seconds: ";
    cin >> seconds;
  };
  void convert() {
    hours = seconds / 3600;
    int remaining = seconds % 3600;
    minutes = remaining / 60;
    remainingSeconds = remaining % 60;
  };
  void display() {
    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << remainingSeconds << endl;
  };
};

int main() {
  TimeConverter timeConv;
  timeConv.input();
  timeConv.convert();
  timeConv.display();
  return 0;
}