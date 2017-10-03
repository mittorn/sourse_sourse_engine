include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}/common
	${CMAKE_CURRENT_SOURCE_DIR}/public
)

#add_subdirectory(tier1)
#add_subdirectory(tier0)
#add_subdirectory(tier2)

#add_subdirectory(vstdlib)

#add_subdirectory(datacache)
#add_subdirectory(scenefilecache)

#add_subdirectory(soundemittersystem)

add_subdirectory(dedicated)
add_subdirectory(dedicated_main)

#add_subdirectory(filesystem)
#add_subdirectory(networksystem)
#add_subdirectory(vphysics)

#add_subdirectory(engine)

#add_subdirectory(game)

if(NOT SWDS)
	#add_subdirectory(gameui)
	add_subdirectory(inputsystem)
	#add_subdirectory(soundsystem)

	add_subdirectory(launcher)
	add_subdirectory(launcher_main)
endif()