# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Vending-QT-Project_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Vending-QT-Project_autogen.dir\\ParseCache.txt"
  "Vending-QT-Project_autogen"
  )
endif()
