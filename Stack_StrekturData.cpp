#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Book {
public:
    string title;
    string author;

    Book(string t, string a) : title(t), author(a) {}
};

void displayBooks(stack<Book> s) {
    cout << "Buku yang ada di perpustakaan :" << endl;
    while (!s.empty()) {
        Book currentBook = s.top();
        s.pop();
        cout << "Judul: " << currentBook.title << ", Penulis: " << currentBook.author << endl;
    }
    cout << "Akhir daftar buku." << endl;
}

int main() {
    stack<Book> libraryStack;

    // Menambah buku ke tumpukan
    libraryStack.push(Book("Cantik itu luka", "Eka Kurniawan"));
    libraryStack.push(Book("Duduk dulu", "Syahid Muhammad"));

    cout << "Total buku di perpustakaan : " << libraryStack.size() << endl;

    // Menampilkan buku diperpustakaan
    displayBooks(libraryStack);

    return 0;
}