//
// Created by fegom on 27/07/2022.
//

#include "ZombieArena.h"
#include "Zombie.h"

Zombie *createHorde(int numZombies, IntRect arena) {
    auto *zombies = new Zombie[numZombies];

    int maxY = arena.height - 20;
    int minY = arena.top + 20;

    int maxX = arena.width - 20;
    int minX = arena.left + 20;

    for (int i = 0; i < numZombies; ++i) {
        // Which side should the zombie spawn
        srand((int) time(0) * i);
        int side = (rand() % 4);
        float x, y;

        switch (side) {
            case 0:
                // Left
                x = minX;
                y = (rand() % maxY) + minY;
                break;
            case 1:
                // Right
                x = maxX;
                y = (rand() % maxY) + minY;
                break;
            case 2:
                // Top
                x = (rand() % maxX) + minX;
                y = minY;
                break;
            case 3:
                x = (rand() % maxX) + minX;
                y = maxY;
                break;
        }

        // Bloater, crawler or runner
        srand((int) time(0) * i * 2);
        int type = (rand() % 3);

        // Spawn the new zombie into the array
        zombies[i].spawn(x, y, type, i);
    }

    return zombies;
}