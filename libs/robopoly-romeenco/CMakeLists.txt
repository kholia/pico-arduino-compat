add_library(robopoly-romeenco INTERFACE)

target_sources(robopoly-romeenco INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Encoders/src/RomEnco.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Encoders/src/RomEnco.h"
)

target_include_directories(robopoly-romeenco INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Robopoly_Encoders/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(robopoly-romeenco INTERFACE
    arduino-compat
)
