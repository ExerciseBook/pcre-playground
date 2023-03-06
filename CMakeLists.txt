cmake_minimum_required(VERSION 3.24)
project(pcre_playground)

set(CMAKE_CXX_STANDARD 23)

set(PCRE2_BUILD_PCRE2_8 OFF CACHE BOOL "")
set(PCRE2_BUILD_PCRE2_16 ON CACHE BOOL "")
set(PCRE2_SUPPORT_LIBZ OFF CACHE BOOL "")

add_subdirectory(pcre2)

add_executable(pcre_playground main.cpp jpcre2.hpp)
target_link_libraries(pcre_playground pcre2-16)
