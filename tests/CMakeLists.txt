set(BINARY ${CMAKE_PROJECT_NAME}_tst)

add_executable(${BINARY}
    main.cpp
    test_point2d.cpp
)

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_include_directories(${BINARY}
        PRIVATE $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>/include)

target_link_libraries(${BINARY} PUBLIC gtest)


