#include <iostream>
using namespace std;

class Cylinder {
public:
  float radius, height;
  float area, volume;
  void input() {
    cout << "Enter radius of the cylinder: ";
    cin >> radius;
    cout << "Enter height of the cylinder: ";
    cin >> height;
  };
  void calculate() {
    area = 2 * 3.14 * radius * (radius + height);
    volume = 3.14 * radius * radius * height;
  };
  void display() {
    cout << "Surface area of the cylinder: " << area << endl;
    cout << "Volume of the cylinder: " << volume << endl;
  };
};

int main() {
  Cylinder cyl;
  cyl.input();
  cyl.calculate();
  cyl.display();
  return 0;
}