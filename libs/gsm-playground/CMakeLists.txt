add_library(gsm-playground INTERFACE)

target_sources(gsm-playground INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/AT.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/GPS_GE863.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/GSM_GPRS.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/GSM_GE863.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/GPS_GE863.h"
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/GSM_GPRS.h"
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/AT.h"
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/Setting.h"
  "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src/GSM_GE863.h"
)

target_include_directories(gsm-playground INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/gsm-playground/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(gsm-playground INTERFACE
    arduino-compat
)
