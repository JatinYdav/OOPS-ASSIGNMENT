#include <iostream>
using namespace std;

class TimeConverter {
public:
  int hours, minutes, seconds;
  void input() {
    cout << "Enter hours: ";
    cin >> hours;
  };
  void calculate() {
    minutes = hours * 60;
    seconds = hours * 3600;
  };
  void display() {
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
  };
};

int main() {
  TimeConverter time;
  time.input();
  time.calculate();
  time.display();
  return 0;
}