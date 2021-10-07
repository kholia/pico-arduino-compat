add_library(pac-totp-library INTERFACE)

target_sources(pac-totp-library INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TOTP-Arduino/src/sha1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TOTP-Arduino/src/TOTP.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TOTP-Arduino/src/TOTP.h"
  "${CMAKE_CURRENT_LIST_DIR}/TOTP-Arduino/src/sha1.h"
)

target_include_directories(pac-totp-library INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TOTP-Arduino/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-totp-library INTERFACE
    arduino-compat
)
