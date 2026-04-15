#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

int main() {
    string t, a, i;

    cout << "Enter Book Title: ";
    getline(cin, t);
    cout << "Enter Author Name: ";
    getline(cin, a);
    cout << "Enter ISBN: ";
    getline(cin, i);

    Book b1(t, a, i);

    cout << "\nDisplaying Book Metadata:" << endl;
    cout << "Title: " << b1.getTitle() << endl;
    cout << "Author: " << b1.getAuthor() << endl;
    cout << "ISBN: " << b1.getISBN() << endl;

    return 0;
}