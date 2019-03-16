// reset;cd /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test && \
// g++ \
// -std=c++11 \
// -I"/mnt/1T-5e7/mycodehtml/bio_health/bio_code" \
// -o Test_Area_V1 \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Input_sensories/Eyes.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Occipital_lobe/Primary_area_OCC/Area_V1.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Occipital_lobe/Association_area_OCC/Area_VA.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Prefrontal_cortex/Prefrontal_cortex.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test/Test_Area_V1.cpp \
// -lgtest -lgtest_main -pthread && \
// rm e.l && ./Test_Area_V1 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <gtest/gtest.h>

#include "src/Input_sensories/Eyes.h"
#include "src/Occipital_lobe/Primary_area_OCC/Area_V1.h"

using namespace std;

// ================================================================================
// For test, you use TEST()
// This takes 2 parameters;
// test_name and sub_test_name
TEST(Create_instance_and_check_memory_v1,Subtest_1)
{
  // Arrange
  // c area_v1: instance of Area_V1
  Area_V1 area_v1;

  // Act
  auto memory_v1=area_v1.bring_memory_from_V1();
  // std::cout<<"memory_v1: "<<memory_v1<<std::endl;
  // memory_v1: 1

  // Assert
  int expected=1;
  ASSERT_TRUE(expected==memory_v1);
}

TEST(Send_data_from_V1_to_VA_and_check_it,Subtest_2)
{
  // Arrange
  // c area_v1: instance of Area_V1
  Area_V1 area_v1;
  // c area_va: instance of Area_VA
  Area_VA area_va;
  auto memory_v1=area_v1.bring_memory_from_V1();

  // Act
  area_v1.send_memory_from_V1_to_VA(area_va,memory_v1);
  auto memory_from_VA=area_va.bring_memory_from_VA();
  // std::cout<<"memory_from_VA: "<<memory_from_VA<<std::endl;
  // memory_from_VA: 1

  // Assert
  int expected=1;
  ASSERT_TRUE(expected==memory_from_VA);

}

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
