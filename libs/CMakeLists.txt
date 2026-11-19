add_library(ingredients_struct STATIC Ingredients_struct_Udkast.c)
target_include_directories(ingredients_struct PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(dishes STATIC dishes.c)
target_include_directories(dishes PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(dishfinder STATIC dishfinder.c)
target_include_directories(dishfinder PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(dishfinder dishes)

add_library(dish_struct INTERFACE)
target_include_directories(dish_struct INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

