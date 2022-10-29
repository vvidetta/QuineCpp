
// Quine
#include <iostream>

int main()
{
  auto program = R"(
// Quine
#include <iostream>

int main()
{
  auto program = %s%s%c%c;
  std::printf(program, "R\"(", program, ')', '"');
  return 0;
}
)";
  std::printf(program, "R\"(", program, ')', '"');
  return 0;
}
