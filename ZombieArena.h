//
// Created by fegom on 24/07/2022.
//

#include <SFML/Graphics/VertexArray.hpp>

#ifndef ZOMBIEARENA_ZOMBIEARENA_H
#define ZOMBIEARENA_ZOMBIEARENA_H

#endif //ZOMBIEARENA_ZOMBIEARENA_H
#pragma once

#include "Zombie.h"

using namespace sf;

int createBackground(VertexArray &rVA, IntRect arena);

Zombie *createHorde(int numZombies, IntRect arena);