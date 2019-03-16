#include "Ears.h"
#include "src/Temporal_lobe/Primary_area_TEM/Area_A1.h"

// Define constructor
Ears::Ears():passed_auditory_data(0)
{
}

// Define destructor
Ears::~Ears()
{
}

int Ears::return_passed_auditory_data(Ears &ear)
{
  int passed_auditory_data=ear.passed_auditory_data;
  return passed_auditory_data;
}

void Ears::send_auditory_data_to_A1(
  int &passed_auditory_data,
  Area_A1 &area_a1)
{
  area_a1.store_data_into_memory_AA(passed_auditory_data,area_a1);
}

