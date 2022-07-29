cmake_minimum_required(VERSION 3.22)
project(ZombieArena)

set(SFML_STATIC_LIBRARIES TRUE)
set(CMAKE_CXX_STANDARD 14)
find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)

add_executable(ZombieArena main.cpp Player.cpp Player.h ZombieArena.h CreateBackground.cpp TextureHolder.cpp TextureHolder.h Zombie.cpp Zombie.h CreateHorde.cpp)
target_link_libraries(ZombieArena sfml-system sfml-window sfml-graphics sfml-audio sfml-network -static)
