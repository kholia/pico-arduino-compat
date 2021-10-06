add_library(mcci-catena-scd30 INTERFACE)

target_sources(mcci-catena-scd30 INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SCD30/extra/message-port1-format-1e-test.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SCD30/src/MCCI_Catena_SCD30.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SCD30/examples/scd30_lorawan/cMeasurementLoop.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SCD30/src/MCCI_Catena_SCD30.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SCD30/examples/scd30_lorawan/cMeasurementLoop.h"
  "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SCD30/examples/scd30_lorawan/scd30_lorawan.h"
)

target_include_directories(mcci-catena-scd30 INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/MCCI_Catena_SCD30/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(mcci-catena-scd30 INTERFACE
    arduino-compat
)
