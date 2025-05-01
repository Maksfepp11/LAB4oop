#include "publication.h"

Publication::Publication() : title(""), publisher(""), year(0) {}

int Publication::SetTitle(string t) {
    title = t;
    return 1;
}

int Publication::SetPublisher(string p) {
    publisher = p;
    return 1;
}

int Publication::SetYear(int y) {
    year = y;
    return 1;
}

int Publication::Describe() {
    cout << "\nНазва: " << title;
    cout << "\nВидавництво: " << publisher;
    cout << "\nРік видання: " << year << endl;
    return 1;
}
