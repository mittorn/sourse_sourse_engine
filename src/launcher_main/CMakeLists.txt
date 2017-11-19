project(replicasrc-launcher-main)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

if(WIN32)
	file(GLOB PLATFORM_SOURCES
		${CMAKE_CURRENT_SOURCE_DIR}/win/*.cpp
	)
	list(APPEND PROJECT_SOURCES ${PLATFORM_SOURCES})
endif()

add_executable(${PROJECT_NAME} WIN32 ${PROJECT_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "hl2"
)

if(NOT WIN32)
	target_link_libraries(${PROJECT_NAME} -ldl)
endif()