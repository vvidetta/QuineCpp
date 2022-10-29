
// Quine
#include <iostream>

int main()
{
  auto program = R"(
// Quine
#include <iostream>

int main()
{
  auto program = R"(%s)%c;
  std::printf(program, program, '"');
  return 0;
}
)";
  std::printf(program, program, '"');
  return 0;
}
