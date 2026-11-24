add_executable(mealplanner_exe main.c)
target_link_libraries(mealplanner_exe dishfinder)

add_executable(dish_test_exe dish_test.c)
target_link_libraries(dish_test_exe dish_struct)

add_executable(config_test_exe config_test.c)
target_link_libraries(config_test_exe config)
