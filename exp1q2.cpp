Write a program to declare a class book having data members name, price, and pages. Accept data for two books and display the name of the book with the greater price.

#include <iostream>
using namespace std;

class book {
    string name;
    float price;
    int pages;
public:
    void accept() {
        cout << "Enter the name of book: ";
        cin >> name;
        cout << "Enter the price of book: ";
        cin >> price;
        cout << "Enter the number of pages: ";
        cin >> pages;
    }
    float getPrice() {
        return price;
    }
    string getName() {
        return name;
    }
};

int main() {
    book b1, b2;
    b1.accept();
    b2.accept();
    if (b1.getPrice() > b2.getPrice()) {
        cout << "The book with greater price is: " << b1.getName();
    } else {
        cout << "The book with greater price is: " << b2.getName();
    }
    return 0;
}