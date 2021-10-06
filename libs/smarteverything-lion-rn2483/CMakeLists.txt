add_library(smarteverything-lion-rn2483 INTERFACE)

target_sources(smarteverything-lion-rn2483 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-rn2483-library/src/lora/rn2483.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-rn2483-library/src/rn2483.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-rn2483-library/src/lora/rn2483Model.h"
)

target_include_directories(smarteverything-lion-rn2483 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-rn2483-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smarteverything-lion-rn2483 INTERFACE
    arduino-compat
)
