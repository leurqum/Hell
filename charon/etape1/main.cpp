#include "FunctionSignature.hpp"
#include <iostream>


int toto(const std::string& titi)
{
  std::cout << "toto: " << titi << std::endl;
}

int main(int ac, char** av)
{
  FunctionSignature<int (const std::string&) >::type f = &toto;

  f("coucou");

  return 0;
}
