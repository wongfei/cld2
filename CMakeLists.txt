cmake_minimum_required(VERSION 3.15)

project(cld2 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(internal)

install(TARGETS cld2 
	DESTINATION ${CMAKE_INSTALL_PREFIX})

install(FILES 
	public/cld_zero_iq.h 
	DESTINATION ${CMAKE_INSTALL_PREFIX}
)
