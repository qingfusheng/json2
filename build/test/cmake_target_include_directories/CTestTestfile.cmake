# CMake generated Testfile for 
# Source directory: /root/git/testing/json2/test/cmake_target_include_directories
# Build directory: /root/git/testing/json2/build/test/cmake_target_include_directories
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("cmake_target_include_directories_configure" "/usr/local/bin/cmake" "-G" "Unix Makefiles" "-DCMAKE_CXX_COMPILER=/usr/bin/c++" "-Dnlohmann_json_source=/root/git/testing/json2" "/root/git/testing/json2/test/cmake_target_include_directories/project")
set_tests_properties("cmake_target_include_directories_configure" PROPERTIES  FIXTURES_SETUP "cmake_target_include_directories" _BACKTRACE_TRIPLES "/root/git/testing/json2/test/cmake_target_include_directories/CMakeLists.txt;1;add_test;/root/git/testing/json2/test/cmake_target_include_directories/CMakeLists.txt;0;")
add_test("cmake_target_include_directories_build" "/usr/local/bin/cmake" "--build" ".")
set_tests_properties("cmake_target_include_directories_build" PROPERTIES  FIXTURES_REQUIRED "cmake_target_include_directories" _BACKTRACE_TRIPLES "/root/git/testing/json2/test/cmake_target_include_directories/CMakeLists.txt;8;add_test;/root/git/testing/json2/test/cmake_target_include_directories/CMakeLists.txt;0;")
