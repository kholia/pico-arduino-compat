add_library(serialwireoutput INTERFACE)

target_sources(serialwireoutput INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialWireOutput/SWOStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWireOutput/SWOStream.h"
)

target_include_directories(serialwireoutput INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialWireOutput"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(serialwireoutput INTERFACE
    arduino-compat
)
