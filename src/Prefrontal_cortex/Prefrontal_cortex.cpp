#include <iostream>
#include <cstring>

using namespace std;

#include "src/Prefrontal_cortex/Prefrontal_cortex.h"
// #include "src/Temporal_lobe/Association_area_TEM/Area_AA.h"
// #include "src/Occipital_lobe/Association_area_OCC/Area_VA.h"

// ================================================================================

Prefrontal_cortex::Prefrontal_cortex():new_memory_VAPFC(1),new_memory_AAPFC(1)
{
  std::cout<<"Constructor Prefrontal_cortex::Prefrontal_cortex() is called"<<std::endl;
}

Prefrontal_cortex::~Prefrontal_cortex()
{
  std::cout<<"Destructor Prefrontal_cortex::~Prefrontal_cortex() is called"<<std::endl;
}

// Member functions (visual system)
void Prefrontal_cortex::store_visual_data_from_VA_to_VAFPC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_va)
{
  new_memory_VAPFC=memory_va;
}

int Prefrontal_cortex::bring_visual_memory_from_VAPFC()
{
  return new_memory_VAPFC;
}

// Member functions (auditory system)
void Prefrontal_cortex::store_auditory_data_from_AA_to_AAFPC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_aa)
{
  new_memory_AAPFC=memory_aa;
}

int Prefrontal_cortex::bring_auditory_memory_from_AAPFC()
{
  return new_memory_AAPFC;
}

// Member functions (recall existing memories and save them into PFC)
int Prefrontal_cortex::recall_existing_visual_memory_and_save_it_to_PFC()
{
  return existing_memory_VAPFC=existing_visual_memory_VA;
}
int Prefrontal_cortex::recall_existing_auditory_memory_and_save_it_to_PFC()
{
  return existing_memory_AAPFC=existing_auditory_memory_AA;
}
