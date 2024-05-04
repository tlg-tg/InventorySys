//
// Created by tlg on 12.12.2022.
//

#ifndef DO_DECLARATION_H
#define DO_DECLARATION_H
#include <string.h>

class declaration {
public:
    string id, name, age, address, contact, designation, experience, laptop;
    string status;
    declaration () : status("Not Paid") {} //konstruktor
};


#endif //DO_DECLARATION_H
