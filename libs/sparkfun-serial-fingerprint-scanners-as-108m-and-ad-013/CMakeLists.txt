add_library(sparkfun-serial-fingerprint-scanners-as-108m-and-ad-013 INTERFACE)

target_sources(sparkfun-serial-fingerprint-scanners-as-108m-and-ad-013 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS108M_Fingerprint_Scanner_Arduino_Library/src/SparkFun_AS108M_Arduino_Library.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS108M_Fingerprint_Scanner_Arduino_Library/src/SparkFun_AS108M_Constants.h"
  "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS108M_Fingerprint_Scanner_Arduino_Library/src/SparkFun_AS108M_Arduino_Library.h"
)

target_include_directories(sparkfun-serial-fingerprint-scanners-as-108m-and-ad-013 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/SparkFun_AS108M_Fingerprint_Scanner_Arduino_Library/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(sparkfun-serial-fingerprint-scanners-as-108m-and-ad-013 INTERFACE
    arduino-compat
)
