project(replicasrc-tier0)

# Add preprocessor definitions
add_definitions(-DTIER0_DLL_EXPORT)

file(GLOB PROJECT_SOURCES
	${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(${PROJECT_NAME} SHARED ${PROJECT_SOURCES})

set_target_properties(${PROJECT_NAME} PROPERTIES
	OUTPUT_NAME "tier0"
)