add_library(pac-otawrapper INTERFACE)

target_sources(pac-otawrapper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OTAWrapper/src/OTAWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OTAWrapper/src/OTAWrapper.h"
)

target_include_directories(pac-otawrapper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OTAWrapper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-otawrapper INTERFACE
    arduino-compat
)
