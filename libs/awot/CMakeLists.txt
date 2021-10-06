add_library(awot INTERFACE)

target_sources(awot INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/route-params.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/query-params.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/stream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/not-found.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/headers-writing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/timeouts.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/route-root.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/headers-reading.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/statuses.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/http-methods.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/routing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/form-params.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/buffered-read.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/src/aWOT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/examples/FileServer/MimeTypes.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/test/mocks/MockStream.h"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/src/aWOT.h"
  "${CMAKE_CURRENT_LIST_DIR}/aWOT/examples/FileServer/MimeTypes.h"
)

target_include_directories(awot INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/aWOT/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(awot INTERFACE
    arduino-compat
)
