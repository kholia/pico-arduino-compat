add_library(cc3000-mdns INTERFACE)

target_sources(cc3000-mdns INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/CC3000_MDNS/CC3000_MDNS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/CC3000_MDNS/CC3000_MDNS.h"
)

target_include_directories(cc3000-mdns INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/CC3000_MDNS"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(cc3000-mdns INTERFACE
    arduino-compat
)
