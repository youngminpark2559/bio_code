#ifndef AREA_V1_H
#define AREA_V1_H

#include "src/Occipital_lobe/Association_area_OCC/Area_VA.h"

/**
 * @brief Area_V1
 * @details Do the functionalities of Area_V1
 * @author youngminpark2559@gmail.com
 * @date 2019_03_17_14_31_37
 * @version 0.0.1
 */
class Area_V1
{
private:
  int memory_V1;

public:
  Area_V1();
  ~Area_V1();

  void store_data_into_memory_V1(int &data,Area_V1 &area_v1);
  int bring_memory_from_V1();
  void send_memory_from_V1_to_VA(Area_VA &area_va,int &memory_v1);

};
#else // AREA_V1_H is already defined
// Do something
#endif
