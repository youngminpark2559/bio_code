#include <iostream>
#include <cstring>

#include "src/Occipital_lobe/Association_area_OCC/Area_VA.h"
#include "src/Prefrontal_cortex/Prefrontal_cortex.h"

using namespace std;

// ================================================================================
Area_VA::Area_VA():memory_VA(1)
{
  std::cout<<"Constructor Area_VA::Area_VA is called"<<std::endl;
}

Area_VA::~Area_VA()
{
  std::cout<<"Destructor Area_VA::~Area_VA is called"<<std::endl;
}

void Area_VA::store_data_into_memory_VA(Area_VA &Area_VA,int &data)
{
  Area_VA.memory_VA=data;
}

int Area_VA::bring_memory_from_VA()
{
  return memory_VA;
}

void Area_VA::send_data_from_VA_to_VAPFC(
  Prefrontal_cortex &prefrontal_cortex,
  int &memory_VA)
{
  prefrontal_cortex.store_data_from_VA_to_VAFPC(
    prefrontal_cortex,memory_VA);
}