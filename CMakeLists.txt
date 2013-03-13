cmake_minimum_required(VERSION 2.8)
include(FRCDeploy)

project(Nashoba_Robotics-2013_Official)
find_package(WPILib)

FILE(GLOB SOURCE_CODE */*.cpp) 

include_directories(${WPILIB_INCLUDE_DIRS})

add_executable(FRC_UserProgram ${SOURCE_CODE})

target_link_libraries(FRC_UserProgram ${WPILib_LIBRARY})

add_make_deploy(FRC_UserProgram 10.17.68.2)
