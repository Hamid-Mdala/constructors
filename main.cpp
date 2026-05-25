#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;

        cout << "Default constructor called" << endl;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Object created using default constructor
    Student s1;

    s1.display();

    return 0;
}
