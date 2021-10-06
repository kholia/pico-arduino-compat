add_library(trinamic_tmc4210 INTERFACE)

target_sources(trinamic_tmc4210 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino/TMC4210.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino/TMC4210.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino/util/type_traits.h"
  "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino/util/Bitfield.h"
)

target_include_directories(trinamic_tmc4210 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TMC4210_Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(trinamic_tmc4210 INTERFACE
    arduino-compat
)
