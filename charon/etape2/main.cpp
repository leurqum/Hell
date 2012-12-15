#include "Function.hpp"

#include <iostream>

int function(char a)
{
  std::cout << "caractere: '" << a << "'" << std::endl;
  return 42;
}

int function2(int o, std::string s)
{
  std::cout << o << s << std::endl;
  return 24;
}

int main(int ac, char** av)
{
  Function<int(int, std::string)> f2 =  &function2;
  Function<int(char)> f =  &function;
  // Function<int (char)> f;

  // f.setBordel(&function);

  // f.callback('C');
  std::cout << f2(12, "oeufs") << std::endl;
  std::cout << f('c') << std::endl;
  return 0;
}
