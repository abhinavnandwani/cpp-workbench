#pragma once  // Always present in header (.h) files
              // Instructs the compiler to only compile the header file ONCE

namespace uiuc {
  class Cube {  // the curly braces followed by the class name define the scope of
                // the class there are 2 different protection regions inside each
                // class and all variables and functions are defined inside those
                // protection regions
    public:
      double getVolume();
      double getSurfaceArea();
      void setLength(double length);

    private:
      double length_;
  };  // class always ends with semicolon
} // namespace uiuc