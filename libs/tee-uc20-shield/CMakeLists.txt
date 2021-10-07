add_library(pac-tee-uc20-shield INTERFACE)

target_sources(pac-tee-uc20-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/firebase.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/ftp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/sms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/mqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/uc_mqtt.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/call.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/tcp.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/uc_anto.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/ssl.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/gnss.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/http.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/mms.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/TEE_UC20.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/LineNotify.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/uc_audio.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/internet.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/File.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/http.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/tcp.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/File.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/mms.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/ssl.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/call.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/uc_anto.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/LineNotify.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/uc_mqtt.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/firebase.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/uc_audio.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/TEE_UC20.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/gnss.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/ftp.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/internet.h"
  "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield/sms.h"
)

target_include_directories(pac-tee-uc20-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/TEE_UC20_Shield"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-tee-uc20-shield INTERFACE
    arduino-compat
)
