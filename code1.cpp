#include<iostream>
using namespace std;

class Teacher {
private:
    double salary;

public:
    // attributes
    string name, department, subject;

    // method to change department
    void changeDepartment(string newDepartment) {
        department = newDepartment;
    }

    // getter
    void getSalary() {
        cout << "Salary is: " << salary << endl;
    }

    // setter
    void setSalary(double newSalary) {
        salary = newSalary;
    }
};

int main() {
    Teacher t1;

    string a = t1.name = "Muhammad Zeeshan";
    t1.department = "Computer Science";
    t1.subject = "C++";

    t1.setSalary(10000);      // ✅ Set the salary
    t1.getSalary();           // ✅ Print the salary

    cout << a << endl;        // ✅ Print the name

    return 0;
}
//leraned classes objects methods and attributes and encapsulation
