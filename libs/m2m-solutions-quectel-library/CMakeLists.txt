add_library(pac-m2m-solutions-quectel-library INTERFACE)

target_sources(pac-m2m-solutions-quectel-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Quectel/src/M2M_Quectel.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/M2M_Quectel/src/M2M_Quectel.h"
)

target_include_directories(pac-m2m-solutions-quectel-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/M2M_Quectel/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-m2m-solutions-quectel-library INTERFACE
    arduino-compat
)
