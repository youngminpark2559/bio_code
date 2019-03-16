#ifndef AREA_V1_H
#define AREA_V1_H

class Area_V1
{
private:
  int memory_V1;

public:
  Area_V1();
  ~Area_V1();

  void store_data_into_memory_V1(int &data,Area_V1 &area_v1);
  int bring_memory_in_V1();

};
#else // AREA_V1_H is already defined
// Do something
#endif
