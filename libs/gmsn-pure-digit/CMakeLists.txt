add_library(gmsn-pure-digit INTERFACE)

target_sources(gmsn-pure-digit INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PureDigit/PureDigit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PureDigit/PureDigit.h"
)

target_include_directories(gmsn-pure-digit INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PureDigit"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gmsn-pure-digit INTERFACE
    arduino-compat
)
