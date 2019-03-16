#ifndef Area_VA_H
#define Area_VA_H

class Area_VA
{
private:
  int memory_VA;

public:
  Area_VA();
  ~Area_VA();

  void store_data_into_memory_VA(Area_VA &Area_VA,int &data);
  int bring_memory_from_VA();


};
#else // Area_VA_H is already defined
// Do something
#endif

