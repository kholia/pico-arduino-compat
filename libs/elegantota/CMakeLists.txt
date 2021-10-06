add_library(elegantota INTERFACE)

target_sources(elegantota INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ElegantOTA/src/ElegantOTA.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ElegantOTA/src/ElegantOTA.h"
  "${CMAKE_CURRENT_LIST_DIR}/ElegantOTA/src/elegantWebpage.h"
)

target_include_directories(elegantota INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ElegantOTA/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(elegantota INTERFACE
    arduino-compat
)
