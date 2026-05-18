#pragma once
#include <string>

namespace star_map{
    enum class System{
        BetaHydri,
        Sol,
        EpsilonEridani,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani
    };
}

namespace heaven{
  class Vessel {
  public:
    Vessel(const std::string& name, const int i ): name(name), generation(i) {}
    Vessel(const std::string &name, const int i, const star_map::System sys) : name(name), generation(i) ,current_system(sys) {}
    Vessel replicate(const std::string &name);
    void make_buster();
    bool shoot_buster();
    std::string name{};
    int generation{};
    star_map::System current_system;
    int busters{};
  };
  std::string get_older_bob(Vessel v1, Vessel v2);
  bool in_the_same_system(Vessel v1, Vessel v2);
}
