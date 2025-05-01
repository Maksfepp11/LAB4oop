#ifndef BOOK_H
#define BOOK_H

#include "publication.h"

class Book : public Publication {
protected:
    string author;
    int pages;

public:
    Book();
    int SetAuthor(string a);
    int SetPages(int p);
    int Describe() override;
};

#endif
