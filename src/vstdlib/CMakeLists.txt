project(replicasrc-vstdlib)

add_definitions(-DVSTDLIB_DLL_EXPORT)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

if(WIN32)
	file(GLOB PLATFORM_SOURCES
		${CMAKE_CURRENT_SOURCE_DIR}/win/*.cpp
	)
	
	list(APPEND PROJECT_SOURCES ${PLATFORM_SOURCES})
endif()

add_library(${PROJECT_NAME} MODULE ${PROJECT_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "vstdlib"
)

#replicasrc-tier0
target_link_libraries(${PROJECT_NAME} srcsdk-tier1)