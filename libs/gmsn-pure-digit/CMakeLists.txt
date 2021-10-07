add_library(pac-gmsn-pure-digit INTERFACE)

target_sources(pac-gmsn-pure-digit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PureDigit/PureDigit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PureDigit/PureDigit.h"
)

target_include_directories(pac-gmsn-pure-digit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PureDigit"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gmsn-pure-digit INTERFACE
    arduino-compat
)
