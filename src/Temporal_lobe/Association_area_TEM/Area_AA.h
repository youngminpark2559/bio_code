
#ifndef AREA_AA_H
#define AREA_AA_H

// #include "src/Prefrontal_cortex/Prefrontal_cortex.h"
class Prefrontal_cortex;



/**
 * @brief Prefrontal_cortex
 * @details Do the functionalities of prefrontal cortex
 * @author youngminpark2559@gmail.com
 * @date 2019_03_17_14_31_37
 * @version 0.0.1
 */
class Area_AA
{
private:
  int new_auditory_memory_AA;
protected:
  int existing_auditory_memory_AA=10;
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
#else // AREA_AA_H is already defined
// Do something

#endif


