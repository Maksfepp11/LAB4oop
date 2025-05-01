#ifndef PUBLICATION_H
#define PUBLICATION_H

#include <iostream>
#include <string>
using namespace std;

class Publication {
protected:
    string title;
    string publisher;
    int year;

public:
    Publication();
    int SetTitle(string t);
    int SetPublisher(string p);
    int SetYear(int y);
    virtual int Describe();
    virtual ~Publication() {}
};

#endif