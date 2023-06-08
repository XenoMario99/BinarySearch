project(Sort)

add_library(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/src/sort.cpp)
add_library(lib::Sort ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

install(TARGETS ${PROJECT_NAME} 
    LIBRARY DESTINATION lib
    PUBLIC_HEADER DESTINATION include/${PROJECT_NAME}
)
