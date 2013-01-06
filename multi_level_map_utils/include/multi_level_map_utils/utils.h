#ifndef BWI_UTILS
#define BWI_UTILS

#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

namespace bwi_utils {

  std::string frameIdFromLevelId(std::string level_id);
  std::string levelIdFromFrameId(std::string frame_id);
}

#endif
