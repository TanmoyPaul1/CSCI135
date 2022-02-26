#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "viginere.h"
#include "decrypt.h"
#include "decode.h"

//add your tests here
TEST_CASE("Task B: encryptCaesar")
{
    CHECK(encryptCaesar("aBcD!", 1) == "bCdE!");
    CHECK(encryptCaesar("bCdE!", -1) == "aBcD!");
    CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
    CHECK(encryptCaesar("Bfd yt Lt!", -5) == "Way to Go!");
    CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}
TEST_CASE("Task C: encryptVigenere")
{
    CHECK(encryptViginere("aaa", "aaabbb") == "aaa");
    CHECK(encryptViginere("abcde", "b") == "bcdef");
    CHECK(encryptViginere("ABCDE", "c") == "CDEFG");
    CHECK(encryptViginere("aAaAa", "abcde") == "aBcDe");
    CHECK(encryptViginere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}
TEST_CASE("Task D: decryptCaesar")
{
    CHECK(decryptCaesar("bCdE!", 1) == "aBcD!");
    CHECK(decryptCaesar("aBcD!", -1) == "bCdE!");
    CHECK(decryptCaesar("Bfd yt Lt!", 5) == "Way to Go!");
    CHECK(decryptCaesar("Way to Go!", -5) == "Bfd yt Lt!");
    CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
}
TEST_CASE("Task D: decryptViginere")
{
    CHECK(decryptViginere("aaa", "aaabbb") == "aaa");
    CHECK(decryptViginere("bcdef", "b") == "abcde");
    CHECK(decryptViginere("CDEFG", "c") == "ABCDE");
    CHECK(decryptViginere("aBcDe", "abcde") == "aAaAa");
    CHECK(decryptViginere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}
TEST_CASE("decode")
{
    CHECK(decodeCaesar("Validation") == "validation");
    CHECK(decodeCaesar("Afqnifynts") == "Validation");
    CHECK(decodeCaesar("Hello") == "hello");
    CHECK(decodeCaesar("Ifmmp") == "hello");
}