#ifndef VUOBJPROG5_WORD_H
#define VUOBJPROG5_WORD_H

#include "main.h"

class Word {
private:
    string tekstas;
    int eilute;
public:
    Word(string a, int b=0) : tekstas{a}, eilute{b} {};
    string get_tekstas() const { return tekstas; };
    int get_eilute() const { return eilute; };
    friend bool operator == (const Word &a, const Word &b) { return a.tekstas == b.tekstas; };
    bool operator < (const Word &word) const { return ( this->tekstas < word.tekstas ); };
};
#endif //VUOBJPROG5_WORD_H