add_library(pac-stringaction INTERFACE)

target_sources(pac-stringaction INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/StringAction/src/StringAction.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/StringAction/src/StringAction.h"
)

target_include_directories(pac-stringaction INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/StringAction/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-stringaction INTERFACE
    arduino-compat
)
