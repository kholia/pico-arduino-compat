add_library(el_dev_arduino INTERFACE)

target_sources(el_dev_arduino INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EL_dev_arduino/ELOBJ.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EL_dev_arduino/EL.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EL_dev_arduino/examples/exhaustfan/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EL_dev_arduino/ELOBJ.h"
  "${CMAKE_CURRENT_LIST_DIR}/EL_dev_arduino/EL.h"
)

target_include_directories(el_dev_arduino INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EL_dev_arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(el_dev_arduino INTERFACE
    arduino-compat
)
