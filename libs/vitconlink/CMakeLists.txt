add_library(vitconlink INTERFACE)

target_sources(vitconlink INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/VitconLink/ModlinkNTC.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconLink/ModlinkFND.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/VitconLink/ModlinkNTC.h"
  "${CMAKE_CURRENT_LIST_DIR}/VitconLink/ModlinkFND.h"
)

target_include_directories(vitconlink INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/VitconLink"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(vitconlink INTERFACE
    arduino-compat
)
