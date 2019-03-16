
#ifndef PREFRONTAL_CORTEX
#define PREFRONTAL_CORTEX

// #include "src/Occipital_lobe/Association_area_OCC/Area_VA.h"

class Prefrontal_cortex
{
private:
  int memory_VAPFC;
  int memory_AAPFC;

public:
  // Declare constructor
  Prefrontal_cortex();

  // Declare destructor
  ~Prefrontal_cortex();

  // Member functions
  void store_data_from_VA_to_VAFPC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_va);
  int bring_memory_from_VAPFC();

  void store_auditory_data_from_VA_to_AAFPC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_va);
  int bring_auditory_memory_from_AAPFC();

};
#else // PREFRONTAL_CORTEX is already defined
// Do something
#endif
