/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6B
 * Purpose: Implements function
 * prototyped in caesar.h
 */

#include "caesar.h"
#include <string>

char shiftChar(char l, int rshift){
    int s = rshift % 26;
    if(l >= 65 and l <= 90 )
        return (l+s) < 91 ? (l+s) : (l + s) - 26;
    if(l >= 97 and l <= 122)
        return (l+s) < 123 ? (l+s) : (l + s) - 26;
    return l;
}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string a = "";
    for (auto c: plaintext)
        a += shiftChar(c,rshift);
    return a;
}
