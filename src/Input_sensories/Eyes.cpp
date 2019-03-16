#include "Eyes.h"
#include "src/Primary_area/Area_V1.h"

// Define constructor
Eyes::Eyes():passed_data(0)
{
}

// Define destructor
Eyes::~Eyes()
{
}

int Eyes::bring_passed_data(Eyes &eyes)
{
  int passed_data=eyes.passed_data;
  return passed_data;
}

void Eyes::send_data_to_V1(int &passed_data,Area_V1 &area_v1)
{
  
  area_v1.store_data_into_memory_V1(passed_data,area_v1);
}

