# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles/nex-vault_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/nex-vault_autogen.dir/ParseCache.txt"
  "nex-vault_autogen"
  )
endif()
