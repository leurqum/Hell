#include "Function.hpp"

#include <iostream>

int function(char a)
{
  std::cout << "caractere: '" << a << "'" << std::endl;
  return 42;
}

int main(int ac, char** av)
{
  Function<int(char)> f =  &function;
  // Function<int (char)> f;

  // f.setBordel(&function);

  // f.callback('C');
  std::cout << f('U') << std::endl;
  return 0;
}
