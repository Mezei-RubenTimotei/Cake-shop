cmake_minimum_required(VERSION 3.21)
project(CAKE)

set(CMAKE_CXX_STANDARD 14)

add_executable(CAKE main.cpp ComandPanel.cpp ComandPanel.h Cake.cpp Cake.h RecipeCake.cpp RecipeCake.h CakeMaker.cpp CakeMaker.h CommandTaker.cpp CommandTaker.h CarouselOfCakes.cpp CarouselOfCakes.h)
