ADD_EXECUTABLE(
  day3-suite

  sensor-const-suite-basic.cpp
  sensor-const-suite-is-a-sensor.cpp
  sensor-random-suite-basic.cpp
  sensor-random-suite-is-a-sensor.cpp
  sensor-w1-suite.cpp

  switch-mock-suite.cpp

  hal-delay-suite.cpp
  hal-timer-oneshot-suite.cpp
  hal-timer-periodic-suite.cpp
  )

TARGET_LINK_LIBRARIES(
  day3-suite

  sensors
  switches
  hal

  gtest_main 
  )





