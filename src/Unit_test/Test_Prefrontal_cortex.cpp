// reset;cd /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test && \
// g++ \
// -std=c++11 \
// -I"/mnt/1T-5e7/mycodehtml/bio_health/bio_code" \
// -o Test_Prefrontal_cortex \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Input_sensories/Eyes.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Primary_area/Area_V1.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Association_area/Area_VA.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Prefrontal_cortex/Prefrontal_cortex.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test/Test_Prefrontal_cortex.cpp \
// -lgtest -lgtest_main -pthread && \
// rm e.l && ./Test_Prefrontal_cortex 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <gtest/gtest.h>

#include "src/Input_sensories/Eyes.h"
#include "src/Primary_area/Area_V1.h"
#include "src/Association_area/Area_VA.h"
#include "src/Prefrontal_cortex/Prefrontal_cortex.h"

using namespace std;

// ================================================================================
// For test, you use TEST()
// This takes 2 parameters;
// test_name and sub_test_name
TEST(Create_Prefrontal_cortex_instance_and_check_variable_memory_VAPFC,Subtest_1)
{
  // Arrange
  // c prefrontal_cortex: instance of Prefrontal_cortex
  Prefrontal_cortex prefrontal_cortex;

  // Act
  auto memory_VAPFC=prefrontal_cortex.bring_memory_from_VAPFC();
  // std::cout<<"memory_VAPFC: "<<memory_VAPFC<<std::endl;
  // memory_VAPFC: 1

  // Assert
  int expected_value=1;
  ASSERT_TRUE(expected_value==memory_VAPFC);
}

TEST(Send_data_from_VA_to_VAPFC_and_check_memory_VAPFC,Subtest_2)
{
  // Arrange
  // c area_va: instance of Area_VA
  Area_VA area_va;
  // c area_va: instance of Prefrontal_cortex
  Prefrontal_cortex prefrontal_cortex;
  int memory_VA=100;
  area_va.send_data_from_VA_to_VAPFC(prefrontal_cortex,memory_VA);

  // Act
  auto memory_VAPFC=prefrontal_cortex.bring_memory_from_VAPFC();
  // std::cout<<"memory_VAPFC: "<<memory_VAPFC<<std::endl;
  // memory_VAPFC: 100

  // Assert
  int expected=100;
  ASSERT_TRUE(expected==memory_VAPFC);
}

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
