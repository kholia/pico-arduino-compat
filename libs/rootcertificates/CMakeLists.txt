add_library(rootcertificates INTERFACE)

target_sources(rootcertificates INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/RootCertificates/src/RootCertificates.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/RootCertificates/src/RootCertificates.h"
)

target_include_directories(rootcertificates INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/RootCertificates/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(rootcertificates INTERFACE
    arduino-compat
)
