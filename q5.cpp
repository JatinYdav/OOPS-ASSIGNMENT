#include <iostream>
using namespace std;

class PersonalData {
public:
  string name, address, city;
  int age;
  void input() {
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter address: ";
    getline(cin, address);
    cout << "Enter city: ";
    getline(cin, city);
    cout << "Enter age: ";
    cin >> age;
  };
  void display() {
    cout << "Personal Data: " << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "City: " << city << endl;
    cout << "Age: " << age << endl;
  };
};

int main() {
  PersonalData person;
  person.input();
  person.display();
  return 0;
}