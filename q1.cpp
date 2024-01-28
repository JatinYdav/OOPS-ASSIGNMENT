#include <iostream>
using namespace std;

class q1 {
public:
  int math, phy, chem, eng, oops, total;
  float avg;
  void input() {
    cout << "Enter the marks of 5 subjects     (math,phy,chem,eng,oops): "
         << endl;
    cin >> math >> phy >> chem >> eng >> oops;
  };
  void logic() {
    total = math + phy + chem + eng + oops;
    avg = total / 5;
  };
  void display() {
    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << avg << endl;
  };
};

int main() {
  q1 obj;
  obj.input();
  obj.logic();
  obj.display();
  return 0;
}