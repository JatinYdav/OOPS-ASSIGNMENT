#include <iostream>
using namespace std;

class TemperatureConverter {
public:
  float fahrenheit, celsius;
  void input() {
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
  };
  void convert() {
    celsius = (fahrenheit - 32) * 5/9;
  };
  void display() {
    cout << "Temperature in Celsius: " << celsius << endl;
  };
};

int main() {
  TemperatureConverter tempConv;
  tempConv.input();
  tempConv.convert();
  tempConv.display();
  return 0;
}