add_library(otawrapper INTERFACE)

target_sources(otawrapper INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/OTAWrapper/src/OTAWrapper.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/OTAWrapper/src/OTAWrapper.h"
)

target_include_directories(otawrapper INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/OTAWrapper/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(otawrapper INTERFACE
    arduino-compat
)
