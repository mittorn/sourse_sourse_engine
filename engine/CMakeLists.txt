project(replicasrc-engine)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

if(PROJECT_SOURCES)
	add_library(${PROJECT_NAME} MODULE ${PROJECT_SOURCES})
	
	set_target_properties(${PROJECT_NAME} PROPERTIES
		OUTPUT_NAME "engine"
	)
	
	target_link_libraries(${PROJECT_NAME} replicasrc-tier1)
endif()