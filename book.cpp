#include "book.h" 

// Конструктор класу Book
Book::Book() : author(""), pages(0) {
    // Ініціалізація атрибутів:
    // author = "" - Порожній рядок для атрибута author (автор книги)
    // pages = 0 - Ініціалізація кількості сторінок на 0
}

// Метод SetAuthor для встановлення автора книги
int Book::SetAuthor(string a) {
    author = a;  // Присвоєння значення параметра a атрибуту author
    return 1;     // Повернення 1 для вказівки на успішне виконання методу
}

// Метод SetPages для встановлення кількості сторінок у книзі
int Book::SetPages(int p) {
    pages = p;  // Присвоєння значення параметра p атрибуту pages
    return 1;    // Повернення 1 для вказівки на успішне виконання методу
}

int Book::Describe() {
    Publication::Describe(); 
    
    
    // Виведення додаткової інформації, специфічної для класу Book
    cout << "Автор: " << author;  // Виведення автора
    cout << "\nКількість сторінок: " << pages << endl;  // Виведення кількості сторінок
    return 1;  // Повернення 1 для вказівки на успішне виконання методу
}

