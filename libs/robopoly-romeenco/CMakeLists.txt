add_library(pac-robopoly-romeenco INTERFACE)

target_sources(pac-robopoly-romeenco INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Encoders/src/RomEnco.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Encoders/src/RomEnco.h"
)

target_include_directories(pac-robopoly-romeenco INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Encoders/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-robopoly-romeenco INTERFACE
    arduino-compat
)
