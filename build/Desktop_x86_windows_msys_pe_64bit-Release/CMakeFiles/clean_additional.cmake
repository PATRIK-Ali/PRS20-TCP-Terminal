# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\PRS20_V1-0_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\PRS20_V1-0_autogen.dir\\ParseCache.txt"
  "PRS20_V1-0_autogen"
  )
endif()
