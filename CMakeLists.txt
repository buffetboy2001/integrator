# Project setup, this is a library project
cmake_minimum_required(VERSION 3.0)
project(integrator)
enable_language(CXX)

# set versions
include (VersionUtils.cmake)
integrator_get_version ("${PROJECT_SOURCE_DIR}/include"
        integrator_version_major integrator_version_minor integrator_version_patch integrator_version_suffix)
# message(${integrator_version_suffix})
string(LENGTH ${integrator_version_suffix} integrator_version_suffix_length)
if(integrator_version_suffix_length EQUAL 1)
	# ignore this suffix
	set(VERSION ${integrator_version_major}.${integrator_version_minor}.${integrator_version_patch})
else()
	# use the suffix
	set(VERSION ${integrator_version_major}.${integrator_version_minor}.${integrator_version_patch}-${integrator_version_suffix})
endif()
message("-- Generating build for Integrator version ${VERSION}")

# bring log4cplus includes onto our path
# include_directories(/usr/local/include/log4cplus/)
include_directories(${PROJECT_SOURCE_DIR}/include)
# include_directories(${PROJECT_SOURCE_DIR}/include/integrator_config)

# add directories that the linker should use when searching for libraries
link_directories(/usr/local/bin)

# Build the library
add_library(integrator-${VERSION} SHARED src/version.cpp src/integrator.cpp)
target_link_libraries(integrator-${VERSION}) #  cyglog4cplus-1-2-5.dll

# Installing to a separate (absolute) directory
set(LIB_DIR ~/lib_dir/)
set(SOME_LOCATION ~/some_location//${PROJECT_NAME}/${VERSION})
install(TARGETS integrator-${VERSION} 
		DESTINATION bin 
	   	EXPORT export_integrator-${VERSION} 
   		ARCHIVE DESTINATION ${LIB_DIR} 
   	)
install(DIRECTORY include/ 
		DESTINATION include/${PROJECT_NAME}
        FILES_MATCHING PATTERN "*.h"
		)
# build and install to auto-generated cmake files
install(EXPORT export_integrator-${VERSION} 
		DESTINATION ${SOME_LOCATION})


# Thoughts & notes:
#
