
#ifndef Area_VA_H
#define Area_VA_H

#include "src/Prefrontal_cortex/Prefrontal_cortex.h"

class Area_VA
{
private:
  int memory_VA;

public:
  Area_VA();
  ~Area_VA();

  void store_data_into_memory_VA(Area_VA &Area_VA,int &data);
  int bring_memory_from_VA();
  void send_data_from_VA_to_VAPFC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_VA);

};
#else // Area_VA_H is already defined
// Do something
#endif

