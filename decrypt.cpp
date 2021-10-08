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
char shift(char c, std::string kw = "", int s){
    
}
std::string decryptCaesar(std::string ciphertext, int rshift){
    std::string a = "";
    for(auto c : ciphertext)
        a += c - rshift % 26;
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
