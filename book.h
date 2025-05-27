#ifndef BOOK_H  
#define BOOK_H  

#include "publication.h"  

// Клас Book, який успадковує від класу Publication
class Book : public Publication {
protected:
    string author;  
    int pages;    
        

public:
    // Конструктор класу Book
    Book();

    
    int SetAuthor(string a);

    
    int SetPages(int p);

    
    int Describe() override;
    
};



#endif  