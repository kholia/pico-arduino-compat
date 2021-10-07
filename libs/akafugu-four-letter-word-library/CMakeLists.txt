add_library(pac-akafugu-four-letter-word-library INTERFACE)

target_sources(pac-akafugu-four-letter-word-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/FourLetterWord/FourLetterWord.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/FourLetterWord/FourLetterWord.h"
  "${CMAKE_CURRENT_LIST_DIR}/FourLetterWord/flw_blacklist.h"
)

target_include_directories(pac-akafugu-four-letter-word-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/FourLetterWord"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-akafugu-four-letter-word-library INTERFACE
    arduino-compat
)
