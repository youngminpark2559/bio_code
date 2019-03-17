// reset;cd /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test && \
// g++ \
// -std=c++11 \
// -I"/mnt/1T-5e7/mycodehtml/bio_health/bio_code" \
// -o Test_Ears \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Input_sensories/Ears.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Temporal_lobe/Primary_area_TEM/Area_A1.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Temporal_lobe/Association_area_TEM/Area_AA.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Prefrontal_cortex/Prefrontal_cortex.cpp \
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

  // Act
  int passed_auditory_data=ears.return_passed_auditory_data();

  // Assert
  int expected=0;
  ASSERT_TRUE(expected==passed_auditory_data);
}

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
