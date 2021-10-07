add_library(pac-ssvwaitforstringinstream INTERFACE)

target_sources(pac-ssvwaitforstringinstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVWaitForStringInStream/SSVWaitForStringInStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVWaitForStringInStream/SSVWaitForStringInStream.h"
)

target_include_directories(pac-ssvwaitforstringinstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVWaitForStringInStream"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ssvwaitforstringinstream INTERFACE
    arduino-compat
)
