#ifndef TEXTBOOK_H          
#define TEXTBOOK_H          

#include "book.h"           

// Оголошення класу Textbook, який є нащадком (успадковує) класу Book
class Textbook : public Book {
protected:
    string subject;         
    int grade;             

public:
    Textbook();             // Конструктор за замовчуванням

    int SetSubject(string s);  // Метод для встановлення значення поля subject
    int SetGrade(int g);       // Метод для встановлення значення поля grade

    int Describe() override;   // Перевизначений метод Describe — виводить інформацію про підручник
};

#endif 
