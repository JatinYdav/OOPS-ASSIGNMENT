#include <iostream>
using namespace std;

class square {
public:
  float side,area;
  void input() {
    cout << "Enter the side of square: ";
    cin >> side;
  };
  void logic() { area = side*side;};
  void display() { cout << "The area of the square is: " << area; };
};

int main() {
  square obj;
  obj.input();
  obj.logic();
  obj.display();
  return 0;
}