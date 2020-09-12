# CMake generated Testfile for 
# Source directory: /root/git/testing/json2/test/cmake_add_subdirectory
# Build directory: /root/git/testing/json2/build/test/cmake_add_subdirectory
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("cmake_add_subdirectory_configure" "/usr/local/bin/cmake" "-G" "Unix Makefiles" "-DCMAKE_CXX_COMPILER=/usr/bin/c++" "-Dnlohmann_json_source=/root/git/testing/json2" "/root/git/testing/json2/test/cmake_add_subdirectory/project")
set_tests_properties("cmake_add_subdirectory_configure" PROPERTIES  FIXTURES_SETUP "cmake_add_subdirectory" _BACKTRACE_TRIPLES "/root/git/testing/json2/test/cmake_add_subdirectory/CMakeLists.txt;1;add_test;/root/git/testing/json2/test/cmake_add_subdirectory/CMakeLists.txt;0;")
add_test("cmake_add_subdirectory_build" "/usr/local/bin/cmake" "--build" ".")
set_tests_properties("cmake_add_subdirectory_build" PROPERTIES  FIXTURES_REQUIRED "cmake_add_subdirectory" _BACKTRACE_TRIPLES "/root/git/testing/json2/test/cmake_add_subdirectory/CMakeLists.txt;8;add_test;/root/git/testing/json2/test/cmake_add_subdirectory/CMakeLists.txt;0;")
