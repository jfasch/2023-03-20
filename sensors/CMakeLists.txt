ADD_LIBRARY(
  sensors

  sensor.h
  sensor-utils.h

  sensor-const.h
  sensor-const.cpp

  sensor-random.h
  sensor-random.cpp

  sensor-w1.h
  sensor-w1.cpp
)  

TARGET_INCLUDE_DIRECTORIES(
  sensors
  
  PUBLIC
  .
  )
