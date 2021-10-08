/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6C
 * Purpose: Implements the function prototyped
 * in vigenere.h
 */
#include "vigenere.h"
#include <string>
using std::string;

char vShift(char c, std::string kw, int& shift){
    int s = kw[shift] - 97;
    if(c >= 65 and c <= 90 ){
        shift++;
        return (c+s) < 91 ? (c+s) : ((c + s) % 91 + 65);
    }else if(c >= 97 and c <= 122){
        shift++;
        return (c+s) < 123 ? (c+s) : ((c + s) % 123 + 97);
    }
    return c % 128;
}

std::string encryptVigenere(std::string plaintext, std::string keyword){
    int l = keyword.size();
    int c = 0;
    std::string a = "";
    for (auto b : plaintext) {
        c %= l;
        a += vShift(b,keyword,c);
    }
    return a;
}


