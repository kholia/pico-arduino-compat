add_library(mh-z19 INTERFACE)

target_sources(mh-z19 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z19/extras/MHZ19 SC16IS750/MHZ19.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z19/extras/MHZ19 SC16IS750/SC16IS750.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z19/src/MHZ19.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z19/extras/MHZ19 SC16IS750/SC16IS750.h"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z19/extras/MHZ19 SC16IS750/MHZ19.h"
  "${CMAKE_CURRENT_LIST_DIR}/MH-Z19/src/MHZ19.h"
)

target_include_directories(mh-z19 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MH-Z19/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mh-z19 INTERFACE
    arduino-compat
)
