add_library(at24cxx INTERFACE)

target_sources(at24cxx INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/AT24Cxx/AT24Cxx.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/AT24Cxx/AT24Cxx.h"
)

target_include_directories(at24cxx INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/AT24Cxx"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(at24cxx INTERFACE
    arduino-compat
)
