ADD_EXECUTABLE(
  utilities-suite

  server-thread-suite.cpp
)

TARGET_LINK_LIBRARIES(
  utilities-suite

  gtest_main 
  utilities
  Threads::Threads
)
