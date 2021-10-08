/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6D
 * Purpose: Implements the functions
 * prototyped in decrypt.h
 */

#include "decrypt.h"
#include <string>
#include <cctype>
char shift(char c, int s, std::string kw = ""){
    s %= 26;
    if (kw == ""){
        if(c >= 65 and c <= 90)
            return (c-s) > 64 ? (c-s) : (25 + c - s));
        else if(c >= 97 and c <= 122)
            return (c-s) > 96 ? (c-s) : (25 + c - s);
        return c % 128;
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
    int c = 0;
    int l = keyword.size();
    for(auto c : ciphertext){
        if (isalpha(c))
            a += c - keyword[c %l];
        else
            a += c;
    }
    return a;
}
