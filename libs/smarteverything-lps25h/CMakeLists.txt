add_library(smarteverything-lps25h INTERFACE)

target_sources(smarteverything-lps25h INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/sme-lps25h-library/src/Pressure/LPS25H.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/sme-lps25h-library/src/LPS25H.h"
  "${CMAKE_CURRENT_LIST_DIR}/sme-lps25h-library/src/Pressure/LPS25HReg.h"
)

target_include_directories(smarteverything-lps25h INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/sme-lps25h-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(smarteverything-lps25h INTERFACE
    arduino-compat
)
