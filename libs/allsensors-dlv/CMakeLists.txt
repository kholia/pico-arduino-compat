add_library(pac-allsensors-dlv INTERFACE)

target_sources(pac-allsensors-dlv INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AllSensors_DLV/src/AllSensors_DLV.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AllSensors_DLV/src/AllSensors_DLV.h"
)

target_include_directories(pac-allsensors-dlv INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AllSensors_DLV/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-allsensors-dlv INTERFACE
    arduino-compat
)
