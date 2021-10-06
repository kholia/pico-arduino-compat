add_library(umfmlib INTERFACE)

target_sources(umfmlib INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/uMFMLib/src/uMFMLib.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/uMFMLib/src/uMFMLib.h"
)

target_include_directories(umfmlib INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/uMFMLib/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(umfmlib INTERFACE
    arduino-compat
)
