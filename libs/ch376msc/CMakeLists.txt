add_library(pac-ch376msc INTERFACE)

target_sources(pac-ch376msc INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src/Write.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src/Read.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src/Ch376msc.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src/SetGet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src/API.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src/Comm.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src/CommDef.h"
  "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src/Ch376msc.h"
)

target_include_directories(pac-ch376msc INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Ch376msc/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-ch376msc INTERFACE
    arduino-compat
)
