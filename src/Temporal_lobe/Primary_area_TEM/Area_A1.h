#ifndef AREA_A1_H
#define AREA_A1_H

#include "src/Temporal_lobe/Association_area_TEM/Area_AA.h"

class Area_A1
{
private:
  int auditory_memory_A1;

public:
  Area_A1();
  ~Area_A1();

  void store_auditory_data_into_memory_A1(
    int &auditory_data,
    Area_A1 &area_v1);

  int return_auditory_memory_from_A1();

  void send_auditory_memory_from_A1_to_AA(
    Area_AA &area_aa,
    int &auditory_memory_A1);

};
#else // AREA_A1_H is already defined
// Do something
#endif
