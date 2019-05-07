cmake_minimum_required(VERSION 3.14)
project(cpp_project)

set(CMAKE_CXX_STANDARD 17)


set(SOURCE_FILE main.cpp)
option(BOOST_DISABLE_TESTS "Do not build test targets, even if building standalone" OFF)

set(BOOST_URL "https://dl.bintray.com/boostorg/release/1.70.0/source/boost_1_70_0.tar.bz2" CACHE STRING "Boost download URL")
set(BOOST_URL_SHA256 "430ae8354789de4fd19ee52f3b1f739e1fba576f0aded0897c3c2bc00fb38778" CACHE STRING "Boost download URL SHA256 checksum")

include(FetchContent)
FetchContent_Declare(
        Boost
        URL ${BOOST_URL}
        URL_HASH SHA256=${BOOST_URL_SHA256}
)
FetchContent_GetProperties(Boost)

if(NOT Boost_POPULATED)
    FetchContent_Populate(Boost)
    set(BOOST_SOURCE ${boost_SOURCE_DIR})
endif()


include_directories(${BOOST_SOURCE})

add_executable(cpp_project ${SOURCE_FILE})
