#include <iostream>
#include <cstring>

using namespace std;

#include "src/Prefrontal_cortex/Prefrontal_cortex.h"

// comment
#include "src/Temporal_lobe/Association_area_TEM/Area_AA.h"
#include "src/Occipital_lobe/Association_area_OCC/Area_VA.h"
// comment


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

// Member functions (sum new memories in PFC)
int Prefrontal_cortex::sum_new_memories_in_PFC()
{
  // std::cout<<"new_memory_VAPFC: "<<new_memory_VAPFC<<std::endl;
  // std::cout<<"new_memory_AAPFC: "<<new_memory_AAPFC<<std::endl;
  
  int summed_new_memory_in_PFC=\
    new_memory_VAPFC+new_memory_AAPFC;
  return summed_new_memory_in_PFC;
}

// Member functions (sum existing memories in PFC)
int Prefrontal_cortex::sum_existing_memories_in_PFC()
{
  // std::cout<<"existing_memory_VAPFC: "<<existing_memory_VAPFC<<std::endl;
  // std::cout<<"existing_memory_AAPFC: "<<existing_memory_AAPFC<<std::endl;
  int summed_existing_memory_in_PFC=\
    existing_memory_VAPFC+existing_memory_AAPFC;
  return summed_existing_memory_in_PFC;
}

void Prefrontal_cortex::perform_perception()
{
  std::cout<<"summed_new_memories_in_PFC: "<<summed_new_memories_in_PFC<<std::endl;
  std::cout<<"summed_existing_memories_in_PFC: "<<summed_existing_memories_in_PFC<<std::endl;
  std::cout<<"Perception is being processed"<<std::endl;

  // For the simplicity, suppose "perception" is adding following 2 values
  after_perception_PFC=summed_new_memories_in_PFC+summed_existing_memories_in_PFC;
}

int Prefrontal_cortex::return_after_perception_PFC()
{
  return after_perception_PFC;
}