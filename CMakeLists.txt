cmake_minimum_required(VERSION 3.0)
project(MovieBooking)

# Set the include directory
include_directories(src/include/)

add_executable(MovieBooking 
                src/main.cpp 
                src/modules/payment.cpp
                src/modules/movie.cpp
                src/modules/show.cpp
                src/modules/seat.cpp
                src/modules/screen.cpp
                src/modules/theatre.cpp
                src/modules/theatrecontroller.cpp
                )