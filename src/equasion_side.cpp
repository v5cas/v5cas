#include "21+58.h"


v5cas::EqSide::EqSide (std::string istring) {

}

v5cas::EqSide operator""_eqside (std::string istring) {
  return EqSide(istring);
}
