add_library(troykadht INTERFACE)

target_sources(troykadht INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TroykaDHT/src/TroykaDHT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TroykaDHT/src/TroykaDHT.h"
)

target_include_directories(troykadht INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TroykaDHT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(troykadht INTERFACE
    arduino-compat
)
