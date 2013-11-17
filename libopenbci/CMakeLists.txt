
cmake_minimum_required(VERSION 2.6)
project(TEST)

## Target
set(TEST_SRCS TimeoutSerial.cpp openBCI_ADS1299_test.cpp)
add_executable(test_openbci_lib ${TEST_SRCS})

## Link libraries
set(BOOST_LIBS thread date_time system)
find_package(Boost COMPONENTS ${BOOST_LIBS} REQUIRED)
target_link_libraries(test_openbci_lib ${Boost_LIBRARIES})
find_package(Threads REQUIRED)
target_link_libraries(test_openbci_lib ${CMAKE_THREAD_LIBS_INIT})
