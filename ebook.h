#ifndef EBOOK_H              
#define EBOOK_H             

#include "book.h"   

// Оголошення класу EBook — нащадка класу Book
class EBook : public Book {
protected:
    double fileSize;        
    string format;        

public:
    EBook();                // Конструктор за замовчуванням

    int SetFileSize(double s);  // Метод для встановлення розміру файлу електронної книги
    int SetFormat(string f);    // Метод для встановлення формату електронної книги
    int Describe() override;   
};

#endif 