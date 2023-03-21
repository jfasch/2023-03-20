ADD_SUBDIRECTORY(intro-point)
ADD_SUBDIRECTORY(global-ctor)
ADD_SUBDIRECTORY(oo)

ADD_EXECUTABLE(overloading overloading.cpp)
ADD_EXECUTABLE(rodata rodata.cpp point-impl.cpp)
ADD_EXECUTABLE(pass-by-ref pass-by-ref.cpp)
ADD_EXECUTABLE(static static.cpp other.cpp)
ADD_EXECUTABLE(string-constexpr string-constexpr.cpp)

