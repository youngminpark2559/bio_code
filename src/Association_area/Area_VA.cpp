#include <iostream>
#include <cstring>

using namespace std;

#include "src/Primary_area/Area_V1.h"

// ================================================================================
Area_V1::Area_V1():memory_V1(1)
{
  std::cout<<"Constructor Area_V1::Area_V1 is called"<<std::endl;
}

Area_V1::~Area_V1()
{
  std::cout<<"Destructor Area_V1::~Area_V1 is called"<<std::endl;
}

void Area_V1::store_data_into_memory_V1(int &data,Area_V1 &area_v1)
{
  area_v1.memory_V1=data;
}

int Area_V1::bring_memory_in_V1()
{
  return memory_V1;
}
