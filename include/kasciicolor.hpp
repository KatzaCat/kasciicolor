#pragma once

#include <format>
#include <string>

namespace k {
  class AsciiColor {
    public:
      // Color codes

      inline static const int BLACK          = 30;
      inline static const int RED            = 31;
      inline static const int GREEN          = 32;
      inline static const int YELLOW         = 33;
      inline static const int BLUE           = 34;
      inline static const int MAGENTA        = 35;
      inline static const int CYAN           = 36;
      inline static const int WHITE          = 37;
      inline static const int BRIGHT_GREY    = 90;
      inline static const int BRIGHT_RED     = 91;
      inline static const int BRIGHT_GREEN   = 92;
      inline static const int BRIGHT_YELLOW  = 93;
      inline static const int BRIGHT_BLUE    = 94;
      inline static const int BRIGHT_MAGENTA = 95;
      inline static const int BRIGHT_CYAN    = 96;
      inline static const int BRIGHT_WHITE   = 97;

      // Background colors

      inline static const int BLACK_BACKGROUND          = 40;
      inline static const int RED_BACKGROUND            = 41;
      inline static const int GREEN_BACKGROUND          = 42;
      inline static const int YELLOW_BACKGROUND         = 43;
      inline static const int BLUE_BACKGROUND           = 44;
      inline static const int MAGENTA_BACKGROUND        = 45;
      inline static const int CYAN_BACKGROUND           = 46;
      inline static const int WHITE_BACKGROUND          = 47;
      inline static const int BRIGHT_GREY_BACKGROUND    = 100;
      inline static const int BRIGHT_RED_BACKGROUND     = 101;
      inline static const int BRIGHT_GREEN_BACKGROUND   = 102;
      inline static const int BRIGHT_YELLOW_BACKGROUND  = 103;
      inline static const int BRIGHT_BLUE_BACKGROUND    = 104;
      inline static const int BRIGHT_MAGENTA_BACKGROUND = 105;
      inline static const int BRIGHT_CYAN_BACKGROUND    = 106;
      inline static const int BRIGHT_WHITE_BACKGROUND   = 107;

      // Reset color

      inline static const int RESET = 0;

    public:

      // Coloring a string
      inline static const std::string colorString(const int color, const std::string text)
      {return std::format("\e[{}m{}", std::to_string(color), text);}

      inline static const std::string colorStringOnly(const int color, const std::string text)
      {return std::format("\e[{}m{}\e[{}m", std::to_string(color), text, k::AsciiColor::RESET);}

      // Getting the string varient of the colors
      inline static const std::string getCodeAsString(const int color_code)
      {return std::format("\e[{}m", color_code);}
  };
}
