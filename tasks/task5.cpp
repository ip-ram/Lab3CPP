#include "classes.hpp"

#include <iostream>
Gun::Gun():
bullet(5)
{}

Gun::Gun(int bullet_count):
bullet(bullet_count)
{}

void Gun::TryShoot() {
    if (bullet > 0) {
        std::cout << "Bang!";
        bullet--;
    } else {
        std::cout << "Clack!";
    };
}

void Task5_1() {
    Gun gun = Gun(3);

    gun.TryShoot();
    std::cout << std::endl;
    gun.TryShoot();
    std::cout << std::endl;
    gun.TryShoot();
    std::cout << std::endl;
    gun.TryShoot();
    std::cout << std::endl;
    gun.TryShoot();
    std::cout << std::endl;
}
