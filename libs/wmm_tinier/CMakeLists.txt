add_library(wmm_tinier INTERFACE)

target_sources(wmm_tinier INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WMM_Tinier/src/WMM_Tinier.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WMM_Tinier/src/WMM_COF.c"
  "${CMAKE_CURRENT_LIST_DIR}/WMM_Tinier/src/wmm.c"
  "${CMAKE_CURRENT_LIST_DIR}/WMM_Tinier/src/wmm.h"
  "${CMAKE_CURRENT_LIST_DIR}/WMM_Tinier/src/WMM_Tinier.h"
)

target_include_directories(wmm_tinier INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WMM_Tinier/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wmm_tinier INTERFACE
    arduino-compat
)
