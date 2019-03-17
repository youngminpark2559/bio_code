#include <iostream>
#include <cstring>

#include "src/Temporal_lobe/Association_area_TEM/Area_AA.h"
#include "src/Prefrontal_cortex/Prefrontal_cortex.h"

using namespace std;

// ================================================================================
Area_AA::Area_AA():new_auditory_memory_AA(1)
{
  std::cout<<"Constructor Area_AA::Area_AA is called"<<std::endl;
}

Area_AA::~Area_AA()
{
  std::cout<<"Destructor Area_AA::~Area_AA is called"<<std::endl;
}

void Area_AA::store_auditory_data_into_auditory_memory_AA(
  Area_AA &Area_AA,int &auditory_data)
{
  Area_AA.new_auditory_memory_AA=auditory_data;
}

int Area_AA::bring_auditory_memory_from_AA()
{
  return new_auditory_memory_AA;
}

void Area_AA::send_auditory_data_from_AA_to_AAPFC(
  Prefrontal_cortex &prefrontal_cortex,
  int &new_auditory_memory_AA)
{
  prefrontal_cortex.store_auditory_data_from_AA_to_AAFPC(
    prefrontal_cortex,new_auditory_memory_AA);
}
