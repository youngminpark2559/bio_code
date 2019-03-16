// cd /mnt/1T-5e7/mycodehtml/bio_health/my_test_biomechanisms/src/Unit_test && \
// g++ \
// -std=c++11 \
// -I"/mnt/1T-5e7/mycodehtml/bio_health/my_test_biomechanisms" \
// -o Test_Eyes \
// /mnt/1T-5e7/mycodehtml/bio_health/my_test_biomechanisms/src/Input_sensories/Eyes.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/my_test_biomechanisms/src/Primary_area/Area_V1.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/my_test_biomechanisms/src/Unit_test/Test_Eyes.cpp \
// -lgtest -lgtest_main -pthread && \
// rm e.l && ./Test_Eyes 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <gtest/gtest.h>

#include "src/Input_sensories/Eyes.h"
#include "src/Primary_area/Area_V1.h"

using namespace std;

// ================================================================================
// For test, you use TEST()
// This takes 2 parameters;
// test_name and sub_test_name
TEST(TestName,Subtest_1)
{
  Eyes eyes;
  // std::cout<<"&eyes: "<<&eyes<<std::endl;
  // &eyes: 0x7fff43d72c90

  int passed_data=eyes.bring_passed_data(eyes);
  int expected=0;
  ASSERT_TRUE(expected==passed_data);
}

TEST(Test_Eyes_send_data_to_V1_func,Subtest_2)
{
  Eyes eyes;
  Area_V1 area_v1;

  int passed_data=eyes.bring_passed_data(eyes);
  // std::cout<<"passed_data: "<<passed_data<<std::endl;
  // passed_data: 0

  eyes.send_data_to_V1(passed_data,area_v1);

  int memory_in_V1=area_v1.bring_memory_in_V1();
  std::cout<<"memory_in_V1: "<<memory_in_V1<<std::endl;
  // memory_in_V1: 0

}

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
