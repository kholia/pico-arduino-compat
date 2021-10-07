add_library(pac-nmradcc INTERFACE)

target_sources(pac-nmradcc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/NmraDcc/NmraDcc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NmraDcc/examples/NmraDccAccessoryDecoder_Pulsed_8/PinPulser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/NmraDcc/NmraDcc.h"
  "${CMAKE_CURRENT_LIST_DIR}/NmraDcc/examples/NmraDccAccessoryDecoder_Pulsed_8/PinPulser.h"
)

target_include_directories(pac-nmradcc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/NmraDcc"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-nmradcc INTERFACE
    arduino-compat
)
