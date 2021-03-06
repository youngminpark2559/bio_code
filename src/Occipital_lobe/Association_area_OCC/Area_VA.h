#ifndef Area_VA_H
#define Area_VA_H

// #include "src/Prefrontal_cortex/Prefrontal_cortex.h"
class Prefrontal_cortex;


/**
 * @brief Area_VA
 * @details Do the functionalities of Area_VA
 * @author youngminpark2559@gmail.com
 * @date 2019_03_17_14_31_37
 * @version 0.0.1
 */
class Area_VA
{
private:
  int new_visual_memory_VA;
protected:
  int existing_visual_memory_VA=10;
public:
  Area_VA();
  ~Area_VA();

  void store_visual_data_into_memory_VA(Area_VA &Area_VA,int &data);
  int bring_visual_memory_from_VA();
  void send_visual_data_from_VA_to_VAPFC(
    Prefrontal_cortex &prefrontal_cortex,
    int &new_visual_memory_VA);

};
#else // Area_VA_H is already defined
// Do something
#endif

