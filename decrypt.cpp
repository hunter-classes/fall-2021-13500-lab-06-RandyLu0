/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6D
 * Purpose: Implements the functions
 * prototyped in decrypt.h
 */

#include "decrypt.h"
#include <string>

char shift(char c, int s){
    s %= 26;
    if(c >= 65 and c <= 90)
        return (c-s) > 64 ? (c-s) : (26 + c - s);
    else if(c >= 97 and c <= 122)
        return (c-s) > 96 ? (c-s) : (26 + c - s);
    return c;
}

char vshift(char c, std::string kw, int& s){
    int d = kw[s] - 97;
    if(c >= 65 and c <= 90){
        s++;
        return (c-d) > 64 ? (c-d) : (26 + c - d);
    }
    if(c >= 97 and c <= 122){
        s++;
        return (c-d) > 96 ? (c-d) : (26 + c - d);
    }
    return c;
}

std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string a = "";
    for(auto c : ciphertext)
        a += shift(c,rshift);
    return a;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword){
    std::string a = "";
    int d = 0;
    int l = keyword.size();
    for(auto c : ciphertext){
        d %= l;
        a += vshift(c,keyword,d);
    }
    return a;
}
