cmake_minimum_required(VERSION 2.8) # 3.6
project(ReplicaSource)

# Specify output directory (for compiled binaries)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

# We want shared libraries (and modules) without any prefix in name
set(CMAKE_SHARED_LIBRARY_PREFIX "")
set(CMAKE_SHARED_MODULE_PREFIX "")

# Set C++ code standard
set(CMAKE_CXX_STANDARD 11) #03/14/17 ?
set(CMAKE_CXX_EXTENSIONS ON)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -masm=intel")

# Add include search paths
include_directories(
	${CMAKE_SOURCE_DIR}/common
	${CMAKE_SOURCE_DIR}/public
	${CMAKE_SOURCE_DIR}/public/tier0
	${CMAKE_SOURCE_DIR}/public/tier1
)

# Add build targets
add_subdirectory(src)