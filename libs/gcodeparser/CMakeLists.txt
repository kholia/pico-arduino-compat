add_library(pac-gcodeparser INTERFACE)

target_sources(pac-gcodeparser INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/GCodeParser/GCodeParserVs/GCodeParserUnitTests/pch.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GCodeParser/GCodeParserVs/GCodeParserUnitTests/GCodeParserUnitTests.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GCodeParser/src/GCodeParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/GCodeParser/GCodeParserVs/GCodeParserUnitTests/pch.h"
  "${CMAKE_CURRENT_LIST_DIR}/GCodeParser/src/GCodeParser.h"
)

target_include_directories(pac-gcodeparser INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/GCodeParser/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-gcodeparser INTERFACE
    arduino-compat
)
