// reset;cd /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test && \
// g++ \
// -std=c++11 \
// -I"/mnt/1T-5e7/mycodehtml/bio_health/bio_code" \
// -o Test_Prefrontal_cortex \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Input_sensories/Eyes.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Occipital_lobe/Primary_area_OCC/Area_V1.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Occipital_lobe/Association_area_OCC/Area_VA.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Temporal_lobe/Primary_area_TEM/Area_A1.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Temporal_lobe/Association_area_TEM/Area_AA.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Prefrontal_cortex/Prefrontal_cortex.cpp \
// /mnt/1T-5e7/mycodehtml/bio_health/bio_code/src/Unit_test/Test_Prefrontal_cortex.cpp \
// -lgtest -lgtest_main -pthread && \
// rm e.l && ./Test_Prefrontal_cortex 2>&1 | tee -a e.l && code e.l

// ================================================================================
#include <iostream>
#include <gtest/gtest.h>

// Visual system
#include "src/Input_sensories/Eyes.h"
#include "src/Occipital_lobe/Primary_area_OCC/Area_V1.h"
#include "src/Occipital_lobe/Association_area_OCC/Area_VA.h"
// Auditory system
#include "src/Input_sensories/Ears.h"
#include "src/Temporal_lobe/Primary_area_TEM/Area_A1.h"
#include "src/Temporal_lobe/Association_area_TEM/Area_AA.h"
// Preprontal cortex area
#include "src/Prefrontal_cortex/Prefrontal_cortex.h"

// #include "src/Occipital_lobe/Association_area_OCC/Area_VA.h"  // for Area_VA
// #include "src/Prefrontal_cortex/Prefrontal_cortex.h"          // for Prefron...
// #include "src/Temporal_lobe/Association_area_TEM/Area_AA.h"   // for Area_AA


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
  auto new_memory_VAPFC=prefrontal_cortex.bring_visual_memory_from_VAPFC();
  // std::cout<<"new_memory_VAPFC: "<<new_memory_VAPFC<<std::endl;
  // new_memory_VAPFC: 1

  // Assert
  int expected_value=1;
  ASSERT_TRUE(expected_value==new_memory_VAPFC);
}

TEST(Send_data_from_VA_to_VAPFC_and_check_memory_VAPFC,Subtest_2)
{
  // Arrange
  // c area_va: instance of Area_VA
  Area_VA area_va;
  // c area_va: instance of Prefrontal_cortex
  Prefrontal_cortex prefrontal_cortex;
  int new_visual_memory_VA=100;
  area_va.send_visual_data_from_VA_to_VAPFC(prefrontal_cortex,new_visual_memory_VA);

  // Act
  auto new_memory_VAPFC=prefrontal_cortex.bring_visual_memory_from_VAPFC();
  // std::cout<<"new_memory_VAPFC: "<<new_memory_VAPFC<<std::endl;
  // new_memory_VAPFC: 100

  // Assert
  int expected=100;
  ASSERT_TRUE(expected==new_memory_VAPFC);
}

TEST(Send_data_from_AA_to_AAPFC_and_check_memory_AAPFC,Subtest_2)
{
  // Arrange
  // c area_va: instance of Area_VA
  Area_AA area_aa;
  // c area_va: instance of Prefrontal_cortex
  Prefrontal_cortex prefrontal_cortex;
  int memory_AA=101;
  area_aa.send_auditory_data_from_AA_to_AAPFC(
    prefrontal_cortex,
    memory_AA);

  // Act
  auto new_memory_AAPFC=prefrontal_cortex.bring_auditory_memory_from_AAPFC();
  // std::cout<<"new_memory_VAPFC: "<<new_memory_VAPFC<<std::endl;
  // new_memory_VAPFC: 100

  // Assert
  int expected=101;
  ASSERT_TRUE(expected==new_memory_AAPFC);
}

TEST(Recall_existing_memories_and_save_them_into_PFC,Subtest_2)
{
  // Arrange
  Prefrontal_cortex prefrontal_cortex;

  // Act
  int existing_visual_memory=prefrontal_cortex.\
    recall_existing_visual_memory_and_save_it_to_PFC();
  int existing_auditory_memory=prefrontal_cortex.\
    recall_existing_auditory_memory_and_save_it_to_PFC();

  std::cout<<"existing_visual_memory: "<<existing_visual_memory<<std::endl;
  std::cout<<"existing_auditory_memory: "<<existing_auditory_memory<<std::endl;

  // Assert
  // int expected=101;
  // ASSERT_TRUE(expected==new_memory_AAPFC);
}

int main(int argc,char **argv)
{
  testing::InitGoogleTest(&argc,argv);
  return RUN_ALL_TESTS();
}
