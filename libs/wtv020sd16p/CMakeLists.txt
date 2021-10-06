add_library(wtv020sd16p INTERFACE)

target_sources(wtv020sd16p INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/WTV020SD16P/src/WTV020SD16P.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/WTV020SD16P/src/WTV020SD16P.h"
)

target_include_directories(wtv020sd16p INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/WTV020SD16P/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(wtv020sd16p INTERFACE
    arduino-compat
)
