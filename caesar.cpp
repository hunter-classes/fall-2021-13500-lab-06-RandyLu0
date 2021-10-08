/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6B
 * Purpose: Implements function
 * prototyped in caesar.h
 */

#include "caesar.h"
#include <string>

char shiftChar(char c, int rshift){
    int s = rshift % 26;
    if(c >= 65 and c <= 90 )
        return (c+s) < 91 ? (c+s) : ((c + s) % 91 + 65);
    else if(c >= 97 and c <= 122)
        return (c+s) < 123 ? (c+s) : ((c + s) % 123 + 97);
    return c % 128;
}

std::string encryptCaesar(std::string plaintext, int rshift){
    std::string a = "";
    for (auto c: plaintext)
        a += shiftChar(c,rshift);
    return a;
}
