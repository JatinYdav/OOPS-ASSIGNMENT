#include <iostream>
using namespace std;

class circle {
public:
  float radius;
  double area;
  const float pi=3.14;
  void input() {
    cout << "Enter the radius of circle: ";
    cin >> radius;
  };
  void logic() { area = pi*radius*radius;};
  void display() { cout << "The area of the circle is: " << area; };
};

int main() {
  circle obj;
  obj.input();
  obj.logic();
  obj.display();
  return 0;
}