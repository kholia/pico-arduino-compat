add_library(easybuzzer INTERFACE)

target_sources(easybuzzer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyBuzzer/src/EasyBuzzer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyBuzzer/src/Config.h"
  "${CMAKE_CURRENT_LIST_DIR}/EasyBuzzer/src/EasyBuzzer.h"
)

target_include_directories(easybuzzer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyBuzzer/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easybuzzer INTERFACE
    arduino-compat
)
