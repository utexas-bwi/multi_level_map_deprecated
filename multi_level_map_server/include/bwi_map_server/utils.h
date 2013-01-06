#include <iostream>
#include <cassert>
#include <string>
#include <boost/algorithm/string.hpp>

namespace bwi_map_server {

  std::string frameIdFromLevelName(std::string name) {
    assert (name.find('/') == -1);
    return "/" + name + "/map";
  }

  std::string nameFromLevelFrameId(std::string frame_id) {
    std::vector<std::string> components;
    boost::split(components, frame_id, boost::is_any_of("/"));
    assert (components.size() == 3);
    assert (components[0] == "");
    assert (components[2] == "map");
    return components[1];
  }

}
