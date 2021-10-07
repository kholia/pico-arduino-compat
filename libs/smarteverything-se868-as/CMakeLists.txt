add_library(pac-smarteverything-se868-as INTERFACE)

target_sources(pac-smarteverything-se868-as INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-se868-a-library/src/gps/sl868aParser.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-se868-a-library/src/gps/sl868a.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-se868-a-library/src/sl868a.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-se868-a-library/src/gps/smeErrorCode.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-se868-a-library/src/gps/sl868aModel.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-se868-a-library/src/gps/sl868aParser.h"
)

target_include_directories(pac-smarteverything-se868-as INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-se868-a-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-smarteverything-se868-as INTERFACE
    arduino-compat
)
