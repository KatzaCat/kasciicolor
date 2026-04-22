#include <kasciicolor.hpp>

#include <print>

int main() {
  std::println("{}", k::AsciiColor::colorString(k::AsciiColor::GREEN, "This is a full color string"));
  std::print("\e[{}m", k::AsciiColor::RESET);

  std::println("Now only {} is colored", k::AsciiColor::colorStringOnly(k::AsciiColor::BRIGHT_RED, "THIS"));

  return 0;
}
