add_library(pac-trinamic_tmc4210 INTERFACE)

target_sources(pac-trinamic_tmc4210 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino/TMC4210.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino/TMC4210.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino/util/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino/util/Bitfield.h"
)

target_include_directories(pac-trinamic_tmc4210 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-trinamic_tmc4210 INTERFACE
    arduino-compat
)
