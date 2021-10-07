add_library(pac-blvd20km_asukiaaa INTERFACE)

target_sources(pac-blvd20km_asukiaaa INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/BLVD20KM_asukiaaa/src/BLVD20KM_asukiaaa.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/BLVD20KM_asukiaaa/src/BLVD20KM_asukiaaa.h"
)

target_include_directories(pac-blvd20km_asukiaaa INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/BLVD20KM_asukiaaa/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-blvd20km_asukiaaa INTERFACE
    arduino-compat
)
