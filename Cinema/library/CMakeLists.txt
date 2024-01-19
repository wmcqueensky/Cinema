enable_testing()
cmake_minimum_required(VERSION 3.4)
project(Library)

set(SOURCE_FILES
        include/Ticket.h
        src/Ticket.cpp
        include/ReducedTicket.h
        src/ReducedTicket.cpp
        include/NormalTicket.h
        src/NormalTicket.cpp
        include/Movie.h
        src/Movie.cpp
        include/Seat.h
        src/Seat.cpp
        src/Room.cpp
        include/Room2D.h
        src/Room2D.cpp
        include/Room3D.h
        src/Room3D.cpp
        include/Client.h
        src/Client.cpp
        include/Snack.h
        src/Snack.cpp
        include/Transaction.h
        src/Transaction.cpp)


add_library(Library ${SOURCE_FILES})

target_include_directories(Library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

set(SOURCE_TEST_FILES
        test/master.cpp
        test/TicketTest.cpp
        test/Movietest.cpp
        test/SeatTest.cpp
        test/RoomTest.cpp
        test/ClientTest.cpp
        test/SnackTest.cpp
        test/TransactionTest.cpp)

include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        ${Boost_INCLUDE_DIRS}
)

find_package (Boost 1.60.0 COMPONENTS "unit_test_framework" REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})

add_executable (Test ${SOURCE_TEST_FILES})

target_link_libraries (Test
        ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY}
        Library
)

add_test(TestLibrary1 Test
        --report_level=detailed
        --log_level=all
        --color_output=yes
)

add_custom_target(check ${CMAKE_COMMAND} -E env CTEST_OUTPUT_ON_FAILURE=1 BOOST_TEST_LOG_LEVEL=all
        ${CMAKE_CTEST_COMMAND} -C $<CONFIG> --verbose
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR})
