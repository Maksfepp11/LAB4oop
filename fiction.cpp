#include "fiction.h"

Fiction::Fiction() : genre("") {}

int Fiction::SetGenre(string g) {
    genre = g;
    return 1;
}

int Fiction::Describe() {
    Book::Describe();
    cout << "Жанр: " << genre << endl;
    return 1;
}