/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6C
 * Purpose: Prototypes the function
 * implemented in vigenere.cpp
 */

#ifndef INC_6_VIGENERE_H
#define INC_6_VIGENERE_H
#pragma once

#include <string>

char vShift(char c, std::string kw, int& shift);
std::string encryptVigenere(std::string plaintext, std::string keyword);

#endif //INC_6_VIGENERE_H
