#ifndef EYES_H
#define EYES_H

#include "src/Temporal_lobe/Primary_area_TEM/Area_A1.h"

// Define class
class Ears
{
private:
  // Member variables
  int passed_auditory_data;
public:
  // Constructor
  Ears();

  // Destructor
  ~Ears();

  // Member functions
  int return_passed_auditory_data(Ears &ears);

  void send_auditory_data_to_A1(
    int &passed_auditory_data,
    Area_A1 &area_a1);

};

#else // EYES_H is already defined
// Do something
#endif

