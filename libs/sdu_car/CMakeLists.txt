add_library(pac-sdu_car INTERFACE)

target_sources(pac-sdu_car INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sducar/SDU_CAR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sducar/SDU_CAR.h"
)

target_include_directories(pac-sdu_car INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sducar"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-sdu_car INTERFACE
    arduino-compat
    pac-sd
)
