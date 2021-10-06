add_library(ssvwaitforstringinstream INTERFACE)

target_sources(ssvwaitforstringinstream INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SSVWaitForStringInStream/SSVWaitForStringInStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SSVWaitForStringInStream/SSVWaitForStringInStream.h"
)

target_include_directories(ssvwaitforstringinstream INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SSVWaitForStringInStream"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(ssvwaitforstringinstream INTERFACE
    arduino-compat
)
