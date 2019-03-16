#include <iostream>
#include <cstring>

using namespace std;

#include "src/Association_area/Area_VA.h"

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

