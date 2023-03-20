ADD_LIBRARY(
  utilities

  queue.h
  server-thread.cpp
  server-thread.h
)

TARGET_INCLUDE_DIRECTORIES(
  utilities

  PUBLIC
  .
)
