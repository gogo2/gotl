project(GOTLTest)

set(SOURCE_FILES
        main.cpp
        tests.cpp tests.h)

add_executable(GOTLTest ${SOURCE_FILES})

target_link_libraries(GOTLTest GOTL)