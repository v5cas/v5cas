////////////////////////////////////////////////////////////////////////////////
//
// This file is part of the 21+58 CAS Library
// This software is licensed under the MIT License
// In the event that a copy of the MIT License was not included,
// you can find it at https://opensource.org/licenses/MIT
//
// Filename: 21+58.h
// Purpose:  Include file for using 21+58 with your project
// Author:   Drew Deaton
//
////////////////////////////////////////////////////////////////////////////////

#include <tuple>

namespace v5cas {
  class EqSide {


    double Evaluate(void);
    double SetVariable(char varname, double value);
  };
}

typedef std::tuple<v5cas::EqSide,v5cas::EqSide> TwoSideEquasion;
