#ifndef FICTION_H
#define FICTION_H

#include "book.h"

class Fiction : public Book {
protected:
    string genre;

public:
    Fiction();
    int SetGenre(string g);
    int Describe() override;
};

#endif
