add_library(pac-ace128 INTERFACE)

target_sources(pac-ace128 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128map18762345.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128map87651234.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128map87654321.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128map12348765R.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128map12348765.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128map56784321.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128map12345678.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128.h"
  "${CMAKE_CURRENT_LIST_DIR}/ACE128/src/ACE128map54326781.h"
)

target_include_directories(pac-ace128 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ACE128/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ace128 INTERFACE
    arduino-compat
)
