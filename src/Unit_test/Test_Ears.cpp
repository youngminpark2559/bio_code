// reset;cd /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test && \
// g++ \
// -std=c++11 \
// -I"/mnt/1T-5e7/mycodehtml/bio_health/bio_code" \
// -o Test_Ears \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Input_sensories/Ears.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test/Test_Ears.cpp \
// -lgtest -lgtest_main -pthread && \
// rm e.l && ./Test_Ears 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <gtest/gtest.h>

#include "src/Input_sensories/Ears.h"

using namespace std;

// ================================================================================
// For test, you use TEST()
// This takes 2 parameters;
// test_name and sub_test_name
TEST(Create_Ears_instance_and_check_variable_of_passed_auditory_data,Subtest_1)
{
  // Arrange
  Ears ears;
  std::cout<<"&ears: "<<&ears<<std::endl;
  try
  {
      int a=1/0;
  }
  catch (std::exception& e)
  { 
      std::cerr<<'exception: '<<e.what()<<std::endl;
  }
  // &eyes: 0x7fff43d72c90

  // Act
  // int passed_data=eyes.bring_passed_data(eyes);

  // Assert
  // int expected=0;
  // ASSERT_TRUE(expected==passed_data);
}

// TEST(Test_Ears_send_data_to_V1_func,Subtest_2)
// {
//   // Arrange
//   Eyes eyes;
//   Area_V1 area_v1;

//   // Act
//   int passed_data=eyes.bring_passed_data(eyes);
//   // std::cout<<"passed_data: "<<passed_data<<std::endl;
//   // passed_data: 0

//   eyes.send_data_to_V1(passed_data,area_v1);

//   int memory_in_V1=area_v1.bring_memory_from_V1();
//   std::cout<<"memory_in_V1: "<<memory_in_V1<<std::endl;
//   // memory_in_V1: 0

//   // Assert

// }

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
