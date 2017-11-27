# Add preprocessor definitions
# Disable Rad Telemetry profiling
add_definitions(-DRAD_TELEMETRY_DISABLED)

# GNU GCC compiler tweaks
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fvisibility=hidden")
endif()

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/common
	${CMAKE_CURRENT_SOURCE_DIR}/public
)

add_subdirectory(tier0)
#add_subdirectory(tier2)
#add_subdirectory(tier3)

add_subdirectory(vstdlib)

add_subdirectory(datacache)
add_subdirectory(scenefilecache)

add_subdirectory(soundemittersystem)
#add_subdirectory(materialsystem)
#add_subdirectory(replay)

add_subdirectory(dedicated)
add_subdirectory(dedicated_main)

#add_subdirectory(filesystem) # broken
add_subdirectory(networksystem) # blank
#add_subdirectory(vphysics)

#add_subdirectory(engine) # broken

#add_subdirectory(game)

if(NOT SWDS)
	add_subdirectory(gameui)
	#add_subdirectory(haptics)
	add_subdirectory(inputsystem)
	#add_subdirectory(soundsystem) # broken
	#add_subdirectory(studiorender)

	add_subdirectory(launcher)
	add_subdirectory(launcher_main)
endif()