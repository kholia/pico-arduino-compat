add_library(pac-emailsender INTERFACE)

target_sources(pac-emailsender INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EMailSender/EMailSender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EMailSender/EMailSender.h"
  "${CMAKE_CURRENT_LIST_DIR}/EMailSender/EMailSenderKey.h"
)

target_include_directories(pac-emailsender INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EMailSender"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET pac-sd)
    add_subdirectory(../../libs/sd build_pac-sd)
endif()

target_link_libraries(pac-emailsender INTERFACE
    arduino-compat
    pac-sd
)
