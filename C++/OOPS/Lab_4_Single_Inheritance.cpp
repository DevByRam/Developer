#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string Author;
    int isbn;
    string Title;
    int Price;

public:
    // Book(string author, int isbn, string title, int price):
    //     Author(author),
    //     isbn(isbn),
    //     Title(title),
    //     Price(price)
    //     {}

    // OR

    Book(string author, int isbn, string title, int price)
    {
        Author = author;
        this->isbn = isbn;
        Title = title;
        Price = price;
    }

    void setAuthor(string author)
    {
        Author = author;
    }

    void setIsbn(int isbn)
    {
        this->isbn = isbn;
    }

    void setTitle(string title)
    {
        Title = title;
    }

    void setPrice(int price)
    {
        Price = price;
    }

    void dispBookDetails()
    {
        cout << "Author of the Book : " << Author << endl;
        cout << "ISBN : " << isbn << endl;
        cout << "Title of the Book : " << Title << endl;
        cout << "Price of the Book : " << Price << endl;
    }
};

class EBook : public Book
{
private:
    string fileSize;
    string fileFormat;

public:
    EBook(string author, int isbn, string title, int price, string fileSize, string fileFormat) : Book(author, isbn, title, price),
                                                                                                  fileSize(fileSize),
                                                                                                  fileFormat(fileFormat)
    {
    }

    void dispEBookDetails()
    {
        dispBookDetails();
        cout << "File Size of the EBook : " << fileSize << endl;
        cout << "File Format of the EBook : " << fileFormat << endl;
    }
};

int main()
{

    EBook myEBook("J.K. Rowling", 123456789, "Harry Potter and the Sorcerer's Stone", 220, "25MB", "PDF");
    myEBook.dispEBookDetails();
    return 0;
}