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

int Prefrontal_cortex::bring_memory_from_VAPFC()
{
  return memory_VAPFC;
}

void Prefrontal_cortex::store_data_from_VA_to_VAFPC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_va)
{
  // prefrontal_cortex.memory_VAPFC=memory_va;
  memory_VAPFC=memory_va;
}