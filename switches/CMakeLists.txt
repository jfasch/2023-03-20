ADD_LIBRARY(
  switches

  switch.h

  switch-mock.h
  switch-mock.cpp

  switch-sysfs.h
  switch-sysfs.cpp
)

TARGET_INCLUDE_DIRECTORIES(
  switches

  PUBLIC
  .
  )

TARGET_LINK_LIBRARIES(
  switches

  hal
  )
