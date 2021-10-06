add_library(peanutking-soccer INTERFACE)

target_sources(peanutking-soccer INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKingSoccerV2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer_V2.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer_Control.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer_V3.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer_V1.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer_Control.h"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer.h"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer_V2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer_V1.h"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKingSoccerV2.h"
  "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer/PeanutKing_Soccer_V3.h"
)

target_include_directories(peanutking-soccer INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/PeanutKing_Soccer"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(peanutking-soccer INTERFACE
    arduino-compat
)
