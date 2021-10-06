add_library(hm330x-by-tomoto INTERFACE)

target_sources(hm330x-by-tomoto INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/src/Tomoto_HM330X.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/AirQualityIndex.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/M5Atom_Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/M5StickC_Display.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/M5StickC_System.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/M5StickC_Battery.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/M5Atom_System.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/src/Tomoto_HM330X.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/Battery.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/System.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/Display.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/AirQualityIndex.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/Utility.h"
  "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/examples/M5Stack/AirQualityMeter/Platform.h"
)

target_include_directories(hm330x-by-tomoto INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_Tomoto_HM330X/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(hm330x-by-tomoto INTERFACE
    arduino-compat
)
