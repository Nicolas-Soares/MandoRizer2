cmake_minimum_required(VERSION 3.29)
project(mandorizer)

set(MANDORIZER_SOURCES
	main.cpp
	genRandNum.cpp
	option1.cpp
	option2.cpp
	option3.cpp
	option4.cpp
	printAppTitle.cpp
)

add_executable(mandorizer ${MANDORIZER_SOURCES})