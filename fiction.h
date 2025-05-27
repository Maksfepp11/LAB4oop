#ifndef FICTION_H            
#define FICTION_H            

#include "book.h"           

// Оголошення класу Fiction — нащадка класу Book
class Fiction : public Book {
protected:
    string genre;            

public:
    Fiction();               // Конструктор за замовчуванням

    int SetGenre(string g);  
    int Describe() override; 
};

#endif
