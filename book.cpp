#include <iostream>
using namespace std;

class Book
{
    string title;
    string author;
    float price;

public:
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    Book(const Book &b)
    {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    void display()
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1("C++ Programming", "Bjarne Stroustrup", 500);

    cout << "First Book Details:" << endl;
    b1.display();
    Book b2(b1);

    cout << "sCopied Book Details:" << endl;
    b2.display();

    return 0;
}