#pragma once

#include <format>
#include <string>

namespace k {
  class AsciiColor {
    public:
      // Color codes

      inline static const char BLACK          = 30;
      inline static const char RED            = 31;
      inline static const char GREEN          = 32;
      inline static const char YELLOW         = 33;
      inline static const char BLUE           = 34;
      inline static const char MAGENTA        = 35;
      inline static const char CYAN           = 36;
      inline static const char WHITE          = 37;
      inline static const char BRIGHT_GREY    = 90;
      inline static const char BRIGHT_RED     = 91;
      inline static const char BRIGHT_GREEN   = 92;
      inline static const char BRIGHT_YELLOW  = 93;
      inline static const char BRIGHT_BLUE    = 94;
      inline static const char BRIGHT_MAGENTA = 95;
      inline static const char BRIGHT_CYAN    = 96;
      inline static const char BRIGHT_WHITE   = 97;

      // Background colors 

      inline static const char BLACK_BACKGROUND          = 40;
      inline static const char RED_BACKGROUND            = 41;
      inline static const char GREEN_BACKGROUND          = 42;
      inline static const char YELLOW_BACKGROUND         = 43;
      inline static const char BLUE_BACKGROUND           = 44;
      inline static const char MAGENTA_BACKGROUND        = 45;
      inline static const char CYAN_BACKGROUND           = 46;
      inline static const char WHITE_BACKGROUND          = 47;
      inline static const char BRIGHT_GREY_BACKGROUND    = 100;
      inline static const char BRIGHT_RED_BACKGROUND     = 101;
      inline static const char BRIGHT_GREEN_BACKGROUND   = 102;
      inline static const char BRIGHT_YELLOW_BACKGROUND  = 103;
      inline static const char BRIGHT_BLUE_BACKGROUND    = 104;
      inline static const char BRIGHT_MAGENTA_BACKGROUND = 105;
      inline static const char BRIGHT_CYAN_BACKGROUND    = 106;
      inline static const char BRIGHT_WHITE_BACKGROUND   = 107;

      // Reset color

      inline static const char RESET = 0;

    public:

      // Coloring a string
      inline static const std::string colorString(const char color, const std::string text) 
      {return std::format("\e[{}m{}", std::to_string(color), text);}

      inline static const std::string colorStringOnly(const char color, const std::string text) 
      {return std::format("\e[{}m{}\e[{}m", std::to_string(color), text, k::AsciiColor::RESET);}
  };
}
