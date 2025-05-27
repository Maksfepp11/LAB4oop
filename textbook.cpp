#include "textbook.h" 

// Конструктор класу Textbook (без параметрів)
// Ініціалізує поле subject як порожній рядок, а grade — як 0
Textbook::Textbook() : subject(""), grade(0) {}

// Метод для встановлення значення предмета
// Приймає рядок s і зберігає його в поле subject
int Textbook::SetSubject(string s) {
    subject = s;
    return 1;  // Повертає 1 — ознака успішного виконання
}

// Метод для встановлення значення класу (grade)
// Приймає ціле число g і зберігає його в поле grade
int Textbook::SetGrade(int g) {
    grade = g;
    return 1;  // Повертає 1 — ознака успішного виконання
}

// Метод для виведення інформації про підручник
// Спочатку викликає метод Describe() базового класу Book
// Потім додає виведення предмета та класу
int Textbook::Describe() {
    Book::Describe();  // Викликає Describe з класу Book (виведе автора, сторінки тощо)
    cout << "Предмет: " << subject;
    cout << "\nКлас: " << grade << endl;
    return 1;  // Повертає 1 — ознака успішного виконання
}

