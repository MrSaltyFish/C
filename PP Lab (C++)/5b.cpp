// Anvesh Khode
// 5b - Create a class employee, use the constructor to
// initialize the details of employee

#include <iostream>

using namespace std;

class Employee {
public:
  string name;
  int id;
  int salary;
  string dateOfJoining;

  Employee(string name, int id, int salary, string dateOfJoining) {
    this->name = name;
    this->id = id;
    this->salary = salary;
    this->dateOfJoining = dateOfJoining;
  }

  void displayDetails() {
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Salary: " << salary << endl;
    cout << "Date of joining: " << dateOfJoining << endl;
  }
};

int main() {
  Employee employees[5];

  employees[0] = Employee("Alice", 12345, 10000, "2023-10-01");
  employees[1] = Employee("Bob", 54321, 20000, "2023-10-02");
  employees[2] = Employee("Charlie", 98765, 30000, "2023-10-03");
  employees[3] = Employee("Daisy", 67543, 40000, "2023-10-04");
  employees[4] = Employee("Eve", 34567, 50000, "2023-10-05");

  for (int i = 0; i < 5; i++) {
    employees[i].displayDetails();
  }

  return 0;
}