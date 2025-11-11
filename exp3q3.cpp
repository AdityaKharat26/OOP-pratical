#include <iostream>
using namespace std;

class Student {
public:
    class Marks {
    private:
        int roll;
        float per;
    public:
        void accept() {
            cout << "enter the roll number of Student: ";
            cin >> roll;
            cout << "enter the percentage of Student: ";
            cin >> per;
        }

        void display() {
            cout << "Roll number: " << roll << endl;
            cout << "Percentage " << per << endl;
        }
    }; // End of Marks class
}; // End of Student class

int main() {
    Student::Marks m1;
    m1.accept();
    m1.display();
    return 0;
}