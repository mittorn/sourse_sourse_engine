project(replicasrc-vstdlib)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

if(PROJECT_SOURCES)
	add_library(${PROJECT_SOURCES} MODULE ${PROJECT_SOURCES})
	
	set_target_properties(${PROJECT_NAME} PROPERTIES
		OUTPUT_NAME "vstdlib"
	)
endif()