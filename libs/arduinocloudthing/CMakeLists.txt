add_library(pac-arduinocloudthing INTERFACE)

target_sources(pac-arduinocloudthing INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_CloudLocation.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_encode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_writeOnly.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_readOnly.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_addPropertyReal.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/main.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/Arduino.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_publishOnChangeRateLimit.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/TestUtil.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_callback.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_CloudColor.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_publishOnChange.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_decode.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/src/test_publishEvery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/ArduinoCloudThing.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/ArduinoCloudProperty.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/external/catch/v.2.5.0/include/catch_reporter_teamcity.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/external/catch/v.2.5.0/include/catch_reporter_automake.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/external/catch/v.2.5.0/include/catch_reporter_tap.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/external/catch/v.2.5.0/include/catch.hpp"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/open_memstream.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborpretty_stdio.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborparser_dup_string.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborpretty.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborencoder_close_container_checked.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborerrorstrings.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborvalidation.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cbortojson.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborencoder.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborparser.c"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/include/TestUtil.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/test/include/Arduino.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/ArduinoCloudThing.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/ArduinoCloudProperty.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/LinkedList/LinkedList.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/cbor-lib.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/tinycbor-version.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborjson.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cborinternal_p.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/utf8_p.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/compilersupport_p.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/lib/tinycbor/src/cbor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudFloat.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudLocation.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudInt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudWrapperFloat.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudWrapperString.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudWrapperInt.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudString.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudWrapperBool.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudColor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudWrapperBase.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/CloudBool.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudSwitch.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudColoredLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudDimmedLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudSmartPlug.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudTelevision.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudMotionSensor.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudTemperature.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudLight.h"
  "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src/types/automation/CloudContactSensor.h"
)

target_include_directories(pac-arduinocloudthing INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/ArduinoCloudThing/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduinocloudthing INTERFACE
    arduino-compat
)
