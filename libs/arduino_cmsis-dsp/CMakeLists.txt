add_library(pac-arduino_cmsis-dsp INTERFACE)

target_sources(pac-arduino_cmsis-dsp INTERFACE
)

target_include_directories(pac-arduino_cmsis-dsp INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/Arduino_CMSIS-DSP"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-arduino_cmsis-dsp INTERFACE
    arduino-compat
)
