#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;
    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }
   Book(string t, string a, double p) {
       title = t;
      author = a;
        price = p;
    }
           Book(const Book& other) {
                  title = other.title;
                 author = other.author;
                  price = other.price;
    }
    void display_details() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price:" << price << endl;    
    }
};

int main() {
    Book book1;
      book1.display_details();
 Book book2("The Adventures of AI", "John Doe", 15.99);
       book2.display_details();
Book book3 = book2;
      book3.display_details();
 Book book4("Mystery in the Library");
       book4.display_details();
Book book5("Learning Python", "Unknown", 39.99);
    book5.display_details();

    return 0;
}

