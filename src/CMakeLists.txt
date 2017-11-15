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

#add_subdirectory(dedicated) # broken
add_subdirectory(dedicated_main)

#add_subdirectory(filesystem) # broken
add_subdirectory(networksystem) # blank
#add_subdirectory(vphysics)

#add_subdirectory(engine)

#add_subdirectory(game)

if(NOT SWDS)
	#add_subdirectory(gameui) # broken
	#add_subdirectory(inputsystem) # broken
	#add_subdirectory(soundsystem) # broken

	#add_subdirectory(launcher) # broken
	add_subdirectory(launcher_main)
endif()