add_library(ingredients_struct STATIC Ingredients_struct_Udkast.c)
target_include_directories(ingredients_struct PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(dish_struct INTERFACE)
target_include_directories(dish_struct INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(config STATIC config.c)
target_include_directories(config PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(menu STATIC menu.c)
target_include_directories(menu PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(cutest STATIC CuTest.c)
target_include_directories(cutest PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
