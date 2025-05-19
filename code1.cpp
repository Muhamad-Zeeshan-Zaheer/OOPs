#include <iostream>
using namespace std;

class teacher {
private:
    double salary;

public:
    string name, department, subject;

    // Non-parameterized constructor
    teacher() {
        department = "CS";
    }

    // Parameterized constructor
    teacher(string name, string department, string subject) {
        this->name = name;
        this->department = department;
        this->subject = subject;
    }

    // Copy constructor (defined inside the class)
    teacher(const teacher &orgobj) {
        this->name = orgobj.name;
        this->department = orgobj.department;
        this->subject = orgobj.subject;
        this->salary = orgobj.salary;
    }

    // Methods
    void change_department(string new_department) {
        department = new_department;
    }

    void setsalary(double s) {
        salary = s;
    }

    double getsalary() {
        return salary;
    }

    void getinfo() {
        cout << "Name is: " << name << endl;
        cout << "Subject is: " << subject << endl;
        cout << "Department is: " << department << endl;
        cout << "Salary is: " << salary << endl;
    }
};

int main() {
    teacher t1("Shan", "Computer Science", "C++");
    t1.setsalary(50000);
    t1.getinfo();

    cout << "\nThe data for teacher 2 is:" << endl;
    teacher t2("Ahmad", "Mechanical", "MEA");
    t2.setsalary(60000);
    t2.getinfo();

    // Copy constructor usage
    cout << "\nAfter using copy constructor (teacher 3 from teacher 2):" << endl;
    teacher t3(t2); // Invokes copy constructor
    t3.getinfo();

    return 0;
}
