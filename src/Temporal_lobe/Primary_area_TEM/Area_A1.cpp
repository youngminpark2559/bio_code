#include <iostream>
#include <cstring>

using namespace std;

#include "src/Temporal_lobe/Primary_area_TEM/Area_A1.h"
#include "src/Temporal_lobe/Association_area_TEM/Area_AA.h"

// ================================================================================
Area_A1::Area_A1():auditory_memory_A1(1)
{
  std::cout<<"Constructor Area_A1::Area_A1 is called"<<std::endl;
}

Area_A1::~Area_A1()
{
  std::cout<<"Destructor Area_A1::~Area_A1 is called"<<std::endl;
}

void Area_A1::store_auditory_data_into_memory_A1(
  int &auditory_data,
  Area_A1 &area_v1)
{
  area_v1.auditory_memory_A1=auditory_data;
}

int Area_A1::return_memory_from_V1()
{
  return auditory_memory_A1;
}

void Area_A1::send_auditory_memory_from_A1_to_AA(
  Area_AA &area_aa,
  int &auditory_memory_A1)
{
  area_aa.store_auditory_data_into_auditory_memory_AA(
    area_aa,
    auditory_memory_A1);
}