add_library(sdu_car INTERFACE)

target_sources(sdu_car INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sducar/SDU_CAR.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sducar/SDU_CAR.h"
)

target_include_directories(sdu_car INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sducar"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(sdu_car INTERFACE
    arduino-compat
    official-sd
)
