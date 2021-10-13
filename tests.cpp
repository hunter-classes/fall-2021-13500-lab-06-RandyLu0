#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

TEST_CASE("shiftChar"){
    CHECK(shiftChar('a',26) == 'a');
    CHECK(shiftChar('b',1) == 'c');
}

TEST_CASE("caesar cipher"){
    CHECK(encryptCaesar("Way to Go!",5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Way to Go!",-52) == "Way to Go!");
    CHECK(encryptCaesar("12345",-25) == "12345");
}

TEST_CASE("vigenere cipher"){
    CHECK(encryptVigenere("Hello, World!","cake") == "Jevpq, Wyvnd!");
    CHECK(encryptVigenere("12345","abra cadabra") == "12345");
}

TEST_CASE("decrypt caesar"){
    CHECK(decryptCaesar("Bfd yt Lt!",5) == "Way to Go!");
    CHECK(decryptCaesar("Way to Go!",52) == "Way to Go!");
}

TEST_CASE("decrypt vigenere"){
    CHECK(decryptVigenere("Jevpq, Wyvnd!","cake") == "Hello, World!");
    CHECK(decryptVigenere("123456","zonks") == "123456");
}
