cmake_minimum_required(VERSION 3.19.2)

set (CMAKE_CXX_STANDARD 17)

if (APPLE)
  set(CMAKE_C_COMPILER /usr/bin/clang)
  set(CMAKE_CXX_COMPILER /usr/bin/clang++)
endif (APPLE)

if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
  set(CMAKE_C_COMPILER C:/MinGW/bin/gcc.exe)
  set(CMAKE_CXX_COMPILER C:/MinGW/bin/g++.exe)
endif ()  

if (LINUX)
  set(CMAKE_C_COMPILER /usr/bin/gcc)
  set(CMAKE_CXX_COMPILER /usr/bin/g++)
endif (LINUX)  

project(hbi VERSION 0.0.1)

add_executable("${PROJECT_NAME}" main.cpp)

# # add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/externals/readline)

# #get_filename_component(CHRONOMETER_DIR ../ ABSOLUTE)
# #message(${CHRONOMETER_DIR}/chronometer)
# #add_subdirectory(${CHRONOMETER_DIR}/chronometer/build/cmake_install.cmake)
# #include(${CHRONOMETER_DIR}/chronometer/build/cmake_install.cmake)


# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/externals/lua)
# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/externals/lpeg)
# add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/externals/rtmidi)

# include(${CMAKE_CURRENT_SOURCE_DIR}/externals/link/AbletonLinkConfig.cmake)

# FIND_PATH(READLINE_INCLUDE_PATH
#   NAMES readline
#   PATHS /opt/ /usr/
#   # PATHS ${READLINE_FILES_PATH/include/}
# )

# FIND_LIBRARY(READLINE_LIB_FILE
#   NAMES readline
#   PATHS /opt/ /usr/
#   # PATHS ${READLINE_FILES_PATH/bin/}
# )


# get_filename_component(READLINE_LIB_PATH ${READLINE_LIB_FILE} PATH)

# target_include_directories(
#   ${PROJECT_NAME} PUBLIC  
#   PRIVATE ${READ_HEADER_PATH}
#   # PRIVATE C:/ProgramData/mingw64/mingw64/x86_64-w64-mingw32/include/
#   # PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/externals/readline/include/
#   PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/externals/lua/
#   PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/externals/lpeg/
#   PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/externals/rtmidi/
#   PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/externals/link/include/ableton/

#   #PRIVATE ${CHRONOMETER_DIR}/
# )

# target_link_directories(
#   ${PROJECT_NAME}
#   PRIVATE ${READLINE_LIB_PATH}/ 
#   # PRIVATE C:/ProgramData/mingw64/mingw64/lib/
#   # PRIVATE C:/ProgramData/mingw64/mingw64/lib/
#   # PRIVATE C:/ProgramData/mingw64/mingw64/lib/gcc/x86_64-w64-mingw32/lib/
#   # PRIVATE C:/Program Files/WindowsPowerShell/Modules/PSReadline/2.0.0/
#   # PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/externals/readline/include/
#   PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/build/externals/lua/
#   PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/build/externals/lpeg/
#   PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/externals/rtmidi/
#   PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/externals/link/src/ableton/link/

#   #PRIVATE ${CHRONOMETER_DIR}/build/
# )

# target_compile_definitions(${PROJECT_NAME}
#   PRIVATE -DLINKHUT_AUDIO_PLATFORM_DUMMY=1
# )

# target_link_libraries(
#   ${PROJECT_NAME}
#   # LINK_PRIVATE readline #${CMAKE_CURRENT_SOURCE_DIR}/externals/readline/lib/
#   # LINK_PRIVATE Microsoft.PowerShell.PSReadline
#   LINK_PRIVATE readline
#   LINK_PRIVATE lua
#   LINK_PRIVATE lpeg
#   LINK_PRIVATE rtmidi

#   Ableton::Link

#   #LINK_PRIVATE chronometer
# )


# set(CMAKE_MACOSX_RPATH 1)
# install(TARGETS ${PROJECT_NAME} DESTINATION bin)
# install(FILES "/usr/local/include/Rtaudio.h" DESTINATION include)
# install(FILES "/usr/local/include/Rtmidi.h" DESTINATION include)
# install(FILES "/usr/local/lib/librtaudio.dylib" DESTINATION lib)
# install(FILES "/usr/local/lib/librtmidi.dylib" DESTINATION lib)

# set_target_properties(${PROJECT_NAME} PROPERTIES INSTALL_RPATH "@loader_path/../lib")

# include(InstallRequiredSystemLibraries)
# #set(CPACK_RESOURCE_FILE_LICENSE "${CMAKE_CURRENT_SOURCE_DIR}/License.txt")
# #set(CPACK_PACKAGE_VERSION_MAJOR "${${PROJECT_NAME}_VERSION_MAJOR}")
# #set(CPACK_PACKAGE_VERSION_MINOR "${${PROJECT_NAME}_VERSION_MINOR}")
# #set(CPACK_PACKAGE_VERSION_PATCH "${coolstuff_VERSION_PATCH}")
# include(CPack)