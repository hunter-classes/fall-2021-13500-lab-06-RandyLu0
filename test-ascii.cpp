/*
 * Name: Randy Lu
 * Instructor: Mr. Zamansky
 * Assignment: Lab 6A
 * Purpose: Prompts user for line of text
 * returns the associated ascii value of
 * each character
 */

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::getline;

int main(){
    std::string a;
    cout << "Input: ";
    getline(cin,a);
    for (auto x : a)
        cout << x << " " << int(x) << "\n";
    return 0;
}