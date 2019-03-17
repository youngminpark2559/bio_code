#ifndef PREFRONTAL_CORTEX
#define PREFRONTAL_CORTEX

#include "src/Occipital_lobe/Association_area_OCC/Area_VA.h"
#include "src/Temporal_lobe/Association_area_TEM/Area_AA.h"

/**
 * @brief Prefrontal_cortex
 * @details Do the functionalities of prefrontal cortex
 * @author youngminpark2559@gmail.com
 * @date 2019_03_17_14_31_37
 * @version 0.0.1
 */
class Prefrontal_cortex:public Area_VA,public Area_AA
{
private:
  int new_memory_VAPFC;
  int new_memory_AAPFC;

  int existing_memory_VAPFC=0;
  int existing_memory_AAPFC=0;

  int summed_new_memories_in_PFC=0;
  int summed_existing_memories_in_PFC=0;

  int after_perception_PFC=0;

public:
  // Declare constructor
  Prefrontal_cortex();

  // Declare destructor
  ~Prefrontal_cortex();

  // ================================================================================
  // Member functions (visual system)
  void store_visual_data_from_VA_to_VAFPC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_va);
  int bring_visual_memory_from_VAPFC();

  // Member functions (auditory system)
  void store_auditory_data_from_AA_to_AAFPC(
    Prefrontal_cortex &prefrontal_cortex,
    int &memory_aa);
  int bring_auditory_memory_from_AAPFC();

  // ================================================================================
  // Member functions (recall existing memories into PFC)
  int recall_existing_visual_memory_and_save_it_to_PFC();
  int recall_existing_auditory_memory_and_save_it_to_PFC();

  // ================================================================================
  // Member functions (sum new memories in PFC)
  int sum_new_memories_in_PFC();

  // Member functions (sum existing memories in PFC)
  int sum_existing_memories_in_PFC();

  // ================================================================================
  void perform_perception();

  // ================================================================================
  int return_after_perception_PFC();


};
#else // PREFRONTAL_CORTEX is already defined
// Do something
#endif

