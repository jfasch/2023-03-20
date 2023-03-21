ADD_LIBRARY(
  shapes

  point.h
  point.cpp

  circle.h
  circle.cpp

  square.h
  square.cpp
  )

TARGET_INCLUDE_DIRECTORIES(
  shapes

  PUBLIC
  .
)
