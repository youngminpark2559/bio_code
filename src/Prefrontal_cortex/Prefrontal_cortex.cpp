#include <iostream>
#include <cstring>

using namespace std;

#include "src/Prefrontal_cortex/Prefrontal_cortex.h"

// ================================================================================

Prefrontal_cortex::Prefrontal_cortex():memory_VAPFC(1)
{
  std::cout<<"Constructor Prefrontal_cortex::Prefrontal_cortex() is called"<<std::endl;
}

Prefrontal_cortex::~Prefrontal_cortex()
{
  std::cout<<"Destructor Prefrontal_cortex::~Prefrontal_cortex() is called"<<std::endl;
}

int Prefrontal_cortex::bring_auditory_memory_from_AAPFC()
{
  return memory_AAPFC;
}

void Prefrontal_cortex::store_auditory_data_from_VA_to_AAFPC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_aa)
{
  // prefrontal_cortex.memory_VAPFC=memory_va;
  memory_AAPFC=memory_aa;
}

