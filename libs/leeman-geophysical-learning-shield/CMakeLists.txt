add_library(pac-leeman-geophysical-learning-shield INTERFACE)

target_sources(pac-leeman-geophysical-learning-shield INTERFACE
  "${CMAKE_CURRENT_LIST_DIR}/LGLearningShieldLibrary/src/lglearning.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/LGLearningShieldLibrary/src/lglearning.h"
)

target_include_directories(pac-leeman-geophysical-learning-shield INTERFACE
 "${CMAKE_CURRENT_LIST_DIR}/LGLearningShieldLibrary/src"
)

if (NOT TARGET arduino-compat)
    add_subdirectory(../../arduino-compat build_arduino-compat)
endif()

target_link_libraries(pac-leeman-geophysical-learning-shield INTERFACE
    arduino-compat
)
