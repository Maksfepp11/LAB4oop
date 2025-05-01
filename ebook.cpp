#include "ebook.h"

EBook::EBook() : fileSize(0.0), format("") {}

int EBook::SetFileSize(double s) {
    fileSize = s;
    return 1;
}

int EBook::SetFormat(string f) {
    format = f;
    return 1;
}

int EBook::Describe() {
    Book::Describe();
    cout << "Розмір файлу: " << fileSize << " МБ";
    cout << "\nФормат: " << format << endl;
    return 1;
}