add_library(sim800l-library-revised INTERFACE)

target_sources(sim800l-library-revised INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Sim800L-Arduino-Library-revised/Sim800L.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Sim800L-Arduino-Library-revised/Sim800L.h"
)

target_include_directories(sim800l-library-revised INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Sim800L-Arduino-Library-revised"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sim800l-library-revised INTERFACE
    arduino-compat
)
