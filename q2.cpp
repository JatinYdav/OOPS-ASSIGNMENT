#include <iostream>
using namespace std;

class rect {
public:
  float a, b, area;
  void input() {
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> a >> b;
  };
  void logic() { area = a * b; };
  void display() { cout << "The area of the rectangle is: " << area; };
};

int main() {
  rect obj;
  obj.input();
  obj.logic();
  obj.display();
  return 0;
}