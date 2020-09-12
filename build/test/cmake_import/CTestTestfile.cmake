# CMake generated Testfile for 
# Source directory: /root/git/testing/json2/test/cmake_import
# Build directory: /root/git/testing/json2/build/test/cmake_import
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("cmake_import_configure" "/usr/local/bin/cmake" "-G" "Unix Makefiles" "-A" "" "-DCMAKE_CXX_COMPILER=/usr/bin/c++" "-Dnlohmann_json_DIR=/root/git/testing/json2/build" "/root/git/testing/json2/test/cmake_import/project")
set_tests_properties("cmake_import_configure" PROPERTIES  FIXTURES_SETUP "cmake_import" _BACKTRACE_TRIPLES "/root/git/testing/json2/test/cmake_import/CMakeLists.txt;1;add_test;/root/git/testing/json2/test/cmake_import/CMakeLists.txt;0;")
add_test("cmake_import_build" "/usr/local/bin/cmake" "--build" ".")
set_tests_properties("cmake_import_build" PROPERTIES  FIXTURES_REQUIRED "cmake_import" _BACKTRACE_TRIPLES "/root/git/testing/json2/test/cmake_import/CMakeLists.txt;9;add_test;/root/git/testing/json2/test/cmake_import/CMakeLists.txt;0;")
