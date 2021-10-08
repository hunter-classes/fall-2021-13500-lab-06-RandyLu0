/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6D
 * Purpose: Prototypes the functions
 * implemented in decrypt.cpp
 */
#ifndef INC_6_DECRYPT_H
#define INC_6_DECRYPT_H
#pragma once
#include <string>

char shift(char c, int s, std::string kw = "");
std::string decryptCaesar(std::string ciphertext, int rshift);
std::string decryptVigenere(std::string ciphertext, std::string keyword);

#endif //INC_6_DECRYPT_H
