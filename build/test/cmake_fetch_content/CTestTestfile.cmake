# CMake generated Testfile for 
# Source directory: /root/git/testing/json2/test/cmake_fetch_content
# Build directory: /root/git/testing/json2/build/test/cmake_fetch_content
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test("cmake_fetch_content_configure" "/usr/local/bin/cmake" "-G" "Unix Makefiles" "-DCMAKE_CXX_COMPILER=/usr/bin/c++" "-Dnlohmann_json_source=/root/git/testing/json2" "/root/git/testing/json2/test/cmake_fetch_content/project")
set_tests_properties("cmake_fetch_content_configure" PROPERTIES  FIXTURES_SETUP "cmake_fetch_content" LABELS "git_required" _BACKTRACE_TRIPLES "/root/git/testing/json2/test/cmake_fetch_content/CMakeLists.txt;2;add_test;/root/git/testing/json2/test/cmake_fetch_content/CMakeLists.txt;0;")
add_test("cmake_fetch_content_build" "/usr/local/bin/cmake" "--build" ".")
set_tests_properties("cmake_fetch_content_build" PROPERTIES  FIXTURES_REQUIRED "cmake_fetch_content" LABELS "git_required" _BACKTRACE_TRIPLES "/root/git/testing/json2/test/cmake_fetch_content/CMakeLists.txt;9;add_test;/root/git/testing/json2/test/cmake_fetch_content/CMakeLists.txt;0;")
