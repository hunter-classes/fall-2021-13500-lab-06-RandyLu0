#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("caesar cipher"){
    CHECK(encryptCaesar("Way to Go!",5) == "Bfd yt Lt!");
}

TEST_CASE("vigenere cipher"){
    CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
}

TEST_CASE("decrypt caesar"){
    CHECK(decryptCaesar("Bfd yt Lt!",5) == "Way to Go!");
}
/*
TEST_CASE("decrypt vigenere"){
    CHECK(decryptVigenere("Jevpq, Wyvnd!","cake") == "Hello, World!");
}
 */