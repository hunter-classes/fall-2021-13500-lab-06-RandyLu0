/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6
 * Purpose: Main function
 */
#include <iostream>
#include "caesar.h"
#include "decrypt.h"
#include "vigenere.h"
#include <string>
using std::cout;

int main(){
    std::string a = encryptCaesar("Hello",26);
    char b = shiftChar('b',1);
    cout << "Testing shiftChar('b',1): " << b << "\n";
    cout << "Testing encryptCaesar(\"Hello\",26): " << a << "\n";
    a = encryptVigenere("Hello","a");
    cout << "Testing encryptVigenere(\"Hello\",\"a\"): " << a << "\n";
    a = decryptCaesar("Hello",26);
    cout << "Testing decryptCaesar(\"Hello\",26): " << a << "\n";
    a = decryptVigenere("Hello","a");
    cout << "Testing decryptVigenere(\"Hello\",\"a\"): " << a << "\n";
    return 0;
}
