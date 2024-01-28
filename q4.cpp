#include <iostream>
using namespace std;

class triangle {
public:
  float height,base,area;
  void input() {
    cout << "Enter the height and base of triangle: ";
    cin >> height >> base;
  };
  void logic() { area = 0.5 * height * base;};
  void display() { cout << "The area of the triangle is: " << area; };
};

int main() {
  triangle obj;
  obj.input();
  obj.logic();
  obj.display();
  return 0;
}