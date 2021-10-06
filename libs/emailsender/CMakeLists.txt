add_library(emailsender INTERFACE)

target_sources(emailsender INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/EMailSender/EMailSender.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/EMailSender/EMailSender.h"
  "${CMAKE_CURRENT_LIST_DIR}/EMailSender/EMailSenderKey.h"
)

target_include_directories(emailsender INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/EMailSender"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

if (NOT TARGET official-sd)
    add_subdirectory(../../official-libs/sd build_official-sd)
endif()

target_link_libraries(emailsender INTERFACE
    arduino-compat
    official-sd
)
