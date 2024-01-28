#include <iostream>
using namespace std;

class Circle {
public:
  const float PI = 3.14;
  float radius, area, circumference;
  void input() {
    cout << "Enter radius of the circle: ";
    cin >> radius;
  };
  void calculate() {
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
  };
  void display() {
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;
  };
};

int main() {
  Circle circle;
  circle.input();
  circle.calculate();
  circle.display();
  return 0;
}