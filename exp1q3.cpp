//Write a program to declare class "time", accept time in HH:MM:SS format, convert it into total seconds and display them.

#include <iostream>
using namespace std;

class Time {
public:
    int h, m, s, con;
    char colon1, colon2;

    void accept() {
        cout << "Enter time (HH:MM:SS): ";
        cin >> h >> colon1 >> m >> colon2 >> s;
    }

    void convert() {
        con = h * 3600 + m * 60 + s;
        cout << "Time is: " << h << ":" << m << ":" << s << endl;
        cout << "Total time in seconds is: " << con << endl;
    }
};

int main() {
    Time t;     
    t.accept();
    t.convert();
    return 0;
}
