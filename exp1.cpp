//1) Write a program to declare a class Student, having data members also roll no, name, accept and display data for one object.

#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
public:
    void accept() {
        cout << "Enter the roll no: ";
        cin >> roll;
        cout << "Enter the name of student: ";
        cin >> name;
    }
    void display() {
        cout << "The roll no of student is: " << roll << endl;
        cout << "The name of student is: " << name << endl;
    }
};

int main() {
    Student s;
    s.accept();
    cout << "Data:" << endl;
    s.display();
    return 0;
}

Output:
Enter the roll no: 7
Enter the name of student: Aditya
