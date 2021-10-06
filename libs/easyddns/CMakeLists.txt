add_library(easyddns INTERFACE)

target_sources(easyddns INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EasyDDNS/EasyDDNS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EasyDDNS/EasyDDNS.h"
)

target_include_directories(easyddns INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EasyDDNS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(easyddns INTERFACE
    arduino-compat
)
