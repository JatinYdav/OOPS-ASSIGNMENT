#include <iostream>
using namespace std;

class TemperatureConverter {
public:
  float celsius, fahrenheit;
  void input() {
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
  };
  void convert() {
    fahrenheit = (celsius * 9/5) + 32;
  };
  void display() {
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
  };
};

int main() {
  TemperatureConverter tempConv;
  tempConv.input();
  tempConv.convert();
  tempConv.display();
  return 0;
}