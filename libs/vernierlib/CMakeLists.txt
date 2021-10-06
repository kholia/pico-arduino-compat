add_library(vernierlib INTERFACE)

target_sources(vernierlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VernierLib/src/VernierLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VernierLib/src/VernierLib.h"
)

target_include_directories(vernierlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VernierLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vernierlib INTERFACE
    arduino-compat
)
