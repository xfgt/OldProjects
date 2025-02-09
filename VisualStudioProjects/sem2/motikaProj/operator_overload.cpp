#include "Motika.h"



Motika& Motika::operator++() { // ++obj
    //this->duljina++;
    this->setDuljina(this->getDuljina() + 1);

    return *this;
}
// this е указател към конкретния обект с който работим
// Motika& е по референция  и връщаме адрес на конкретния обект

// модифицираме стойностите на конкретния обект
// и връщаме него по стойност

Motika Motika::operator++(int) {  // obj++
    Motika m = *this;
    this->setDuljina(this->getDuljina() + 1);

    return m;
}

// Пазим конкретния обект като го копираме в m
// модифицираме стойността на конкретния обект
// но връщаме предишната му стойност.