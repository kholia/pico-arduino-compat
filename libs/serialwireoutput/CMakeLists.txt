add_library(pac-serialwireoutput INTERFACE)

target_sources(pac-serialwireoutput INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SerialWireOutput/SWOStream.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SerialWireOutput/SWOStream.h"
)

target_include_directories(pac-serialwireoutput INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SerialWireOutput"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-serialwireoutput INTERFACE
    arduino-compat
)
