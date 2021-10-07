add_library(pac-redkea INTERFACE)

target_sources(pac-redkea INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaMessage.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/RedkeaESP8266.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/RedkeaWiFi101.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/RedkeaWrongInclude.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/RedkeaWiFi.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaClient.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaTimer.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaConfig.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaLooper.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaUserFunctions.h"
  "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src/internal/RedkeaMessage.h"
)

target_include_directories(pac-redkea INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/arduino-library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-redkea INTERFACE
    arduino-compat
)
