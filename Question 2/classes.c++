#include <iostream>
#include <string>
#include <ctime>

// Using namespace std for simplicity
using namespace std;

// Book class definition
class Book {
private:
    string title;
    string author;
    int publicationYear;

public:
    // Constructor
    Book(const string& title, const string& author, int publicationYear) {
        this->title = title;
        this->author = author;
        this->publicationYear = publicationYear;
    }

    // Accessors (Getters)
    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    int getPublicationYear() const {
        return publicationYear;
    }

    // Display book information
    void displayInfo() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publicationYear << endl;
    }
};

int main() {
    // Print current date
    time_t now = time(0);
    cout << "Current date: " << ctime(&now);

    // Create Book objects
    Book book1("The Great Gatsby", "F. Scott Fitzgerald", 1925);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);

    // Display book information
    cout << "\nBook 1 Information:" << endl;
    book1.displayInfo();

    cout << "\nBook 2 Information:" << endl;
    book2.displayInfo();

    return 0;
}
