project(replicasrc-tier1)

include_directories(
	${CMAKE_SOURCE_DIR}/public/tier0
	${CMAKE_SOURCE_DIR}/public/tier1
)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

if(PROJECT_SOURCES)
	add_library(${PROJECT_NAME} STATIC ${PROJECT_SOURCES})
	
	set_target_properties(${PROJECT_NAME} PROPERTIES
		OUTPUT_NAME "tier1"
	)
endif()