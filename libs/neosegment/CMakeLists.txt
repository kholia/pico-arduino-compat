add_library(neosegment INTERFACE)

target_sources(neosegment INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino/Neosegment.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino/Neosegment.h"
)

target_include_directories(neosegment INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(neosegment INTERFACE
    arduino-compat
)
