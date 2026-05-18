#include "doctor_data.h"

heaven::Vessel heaven::Vessel::replicate(const std::string & name )
{
    return heaven::Vessel {name,generation+1, current_system};
}

 void heaven::Vessel::make_buster(){
    busters++;
 }

bool heaven::Vessel::shoot_buster(){
    if (busters > 0)
    {
        busters--;
        return true;
    }
    return false;
 }

std::string heaven::get_older_bob(heaven::Vessel v1, heaven::Vessel v2){
    if (v1.generation < v2.generation)
    {
        return v1.name;
    }
    else
    {
        return v2.name;
    }
}


bool heaven::in_the_same_system(heaven::Vessel v1, heaven::Vessel v2){
    return v1.current_system == v2.current_system;
}
