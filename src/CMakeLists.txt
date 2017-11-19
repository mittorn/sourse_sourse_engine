include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/common
	${CMAKE_CURRENT_SOURCE_DIR}/public
)

add_subdirectory(tier0) # blank
#add_subdirectory(tier2)

#add_subdirectory(vstdlib) # unresolved

#add_subdirectory(datacache) # unresolved
#add_subdirectory(scenefilecache) # unresolved

#add_subdirectory(soundemittersystem) # broken
add_subdirectory(materialsystem)
add_subdirectory(replay)

#add_subdirectory(dedicated) # unresolved (should be linked with tier0, tier1 and vstdlib)
add_subdirectory(dedicated_main)

#add_subdirectory(filesystem) # broken
add_subdirectory(networksystem) # blank
#add_subdirectory(vphysics)

add_subdirectory(engine) # broken

#add_subdirectory(game)

if(NOT SWDS)
	#add_subdirectory(gameui) # broken
	add_subdirectory(haptics)
	#add_subdirectory(inputsystem) # broken
	#add_subdirectory(soundsystem) # broken
	add_subdirectory(studiorender)

	#add_subdirectory(launcher) # broken
	add_subdirectory(launcher_main)
endif()