add_library(pac-allsensors-dlhr INTERFACE)

target_sources(pac-allsensors-dlhr INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AllSensors_DLHR/src/AllSensors_DLHR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AllSensors_DLHR/src/AllSensors_DLHR.h"
  "${CMAKE_CURRENT_LIST_DIR}/AllSensors_DLHR/src/AllSensors_DLHR_subclasses.h"
)

target_include_directories(pac-allsensors-dlhr INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AllSensors_DLHR/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-allsensors-dlhr INTERFACE
    arduino-compat
)
