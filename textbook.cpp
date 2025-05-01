#include "textbook.h"

Textbook::Textbook() : subject(""), grade(0) {}

int Textbook::SetSubject(string s) {
    subject = s;
    return 1;
}

int Textbook::SetGrade(int g) {
    grade = g;
    return 1;
}

int Textbook::Describe() {
    Book::Describe();
    cout << "Предмет: " << subject;
    cout << "\nКлас: " << grade << endl;
    return 1;
}
