#ifndef EYES_H
#define EYES_H

#include "src/Occipital_lobe/Primary_area_OCC/Area_V1.h"

/**
 * @brief Eyes
 * @details Do the functionalities of Eyes
 * @author youngminpark2559@gmail.com
 * @date 2019_03_17_14_31_37
 * @version 0.0.1
 */
class Eyes
{
private:
  // Member variables
  int passed_data;
public:
  // Constructor
  Eyes();

  // Destructor
  ~Eyes();

  // Member functions
  int bring_passed_data(Eyes &eyes);

  void send_data_to_V1(int &passed_data,Area_V1 &area_v1);

};

#else // EYES_H is already defined
// Do something
#endif
