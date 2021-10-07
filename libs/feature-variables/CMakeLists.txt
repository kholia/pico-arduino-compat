add_library(pac-feature-variables INTERFACE)

target_sources(pac-feature-variables INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/feature_macros.h"
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/feature_base.h"
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/feature_safe_cast.h"
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/feature_supported_types.h"
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/feature_safe_set.h"
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/feature_safe_get.h"
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/FeatureVariables.h"
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/feature_internal.h"
  "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src/feature_impl.h"
)

target_include_directories(pac-feature-variables INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Feature-Variables/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-feature-variables INTERFACE
    arduino-compat
)
