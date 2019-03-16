
#ifndef Area_AA_H
#define Area_AA_H

#include "src/Prefrontal_cortex/Prefrontal_cortex.h"

class Area_AA
{
private:
  int auditory_memory_AA;

public:
  Area_AA();
  ~Area_AA();

  void store_auditory_data_into_auditory_memory_AA(
    Area_AA &Area_AA,
    int &auditory_data);
  int bring_auditory_memory_from_AA();
  void send_auditory_data_from_AA_to_AAPFC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_AA);

};
#else // Area_AA_H is already defined
// Do something
#endif

