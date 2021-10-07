add_library(pac-yetanotherbuttonlibrary INTERFACE)

target_sources(pac-yetanotherbuttonlibrary INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Yabl/extras/unit_test/YablTest.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Yabl/extras/unit_test/mocks/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Yabl/src/Yabl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Yabl/extras/unit_test/mocks/Bounce2.h"
  "${CMAKE_CURRENT_LIST_DIR}/Yabl/extras/unit_test/mocks/ButtonCallback.h"
  "${CMAKE_CURRENT_LIST_DIR}/Yabl/extras/unit_test/mocks/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/Yabl/src/Yabl.h"
)

target_include_directories(pac-yetanotherbuttonlibrary INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Yabl/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-yetanotherbuttonlibrary INTERFACE
    arduino-compat
)
