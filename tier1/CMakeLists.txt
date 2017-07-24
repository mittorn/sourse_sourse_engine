project(replicasrc-tier1)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

if(PROJECT_SOURCES)
	add_library(${PROJECT_SOURCES} STATIC ${PROJECT_SOURCES})
	
	set_target_properties(${PROJECT_NAME} PROPERTIES
		OUTPUT_NAME "tier1"
	)
endif()