add_library(pac-printcppversion INTERFACE)

target_sources(pac-printcppversion INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PrintCppVersion/src/PrintCppVersion.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PrintCppVersion/src/PrintCppVersion.h"
)

target_include_directories(pac-printcppversion INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PrintCppVersion/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-printcppversion INTERFACE
    arduino-compat
)
