add_library(cayennelpp INTERFACE)

target_sources(cayennelpp INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CayenneLPP/test/aunit/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CayenneLPP/src/CayenneLPP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CayenneLPP/src/CayenneLPP.h"
)

target_include_directories(cayennelpp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CayenneLPP/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cayennelpp INTERFACE
    arduino-compat
)
