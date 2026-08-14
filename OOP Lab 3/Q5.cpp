#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookID;
    string bookTitle;
    string author;
    float price;

public:

    // Function to accept book details
    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cin.ignore();

        cout << "Enter Book Title: ";
        getline(cin, bookTitle);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Price: ";
        cin >> price;
    }

    // Function to display book details
    void display()
    {
        cout << "\n----- Book Details -----" << endl;
        cout << "Book ID    : " << bookID << endl;
        cout << "Book Title : " << bookTitle << endl;
        cout << "Author     : " << author << endl;
        cout << "Price      : " << price << endl;
    }
};

int main()
{
    // Dynamically creating a Book object
    Book *book = new Book;

    // Calling functions using -> operator
    book->accept();
    book->display();

    // Releasing dynamically allocated object
    delete book;

    return 0;
}