
// Quine
#include <iostream>

int main()
{
  auto part1 = R"(
// Quine
#include <iostream>

int main()
{
  auto part1 = R"()";
  auto part2 = R"(;
  auto part2 = R"(;
  std::cout << part1 << part1 << ')' << '"' << part2;
  return 0;
}
)";
  std::cout << part1 << part1 << ')' << '"' << part2;
  return 0;
}
