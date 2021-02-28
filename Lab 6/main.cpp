#include <iostream>
#include <string>
#include "funcs.h"
#include "decode.h"
#include "caesar.h"

int main()
{
  test_ascii("");
  test_ascii(" ! @ # $ % ");
  test_ascii("ABCDEFGHI");
  test_ascii("abcdefghi");
  test_ascii("Cat :3 Dog");
  std::cout << decodeCaesar("Validation") << std::endl;
  std::cout << decodeCaesar("Afqnifynts") << std::endl;
  std::cout << decodeCaesar("Hello") << std::endl;
  std::cout << decodeCaesar("Ifmmp") << std::endl;
  std::cout << decodeCaesar("abcdef") << std::endl;
  std::cout << decodeCaesar("bcdefg") << std::endl;
  // std::cout << encryptCaesar("Validation", 5) << std::endl;
  // std::cout << encryptCaesar("Phone", 3) << std::endl;
  return 0;
}
