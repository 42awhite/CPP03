#include "FragTrap.hpp"

int main() {
    // 1. Crear un FragTrap por defecto
    FragTrap scavDefault;
    std::cout << std::endl;

    scavDefault.takeDamage(30);
    // 2. Crear un FragTrap con un nombre
    FragTrap scavNamed("Choclete");
    std::cout << std::endl;

    // 3. Usar el método guardGate()
    scavNamed.highFivesGuys();
    std::cout << std::endl;

    // 4. Probar ataque, daño y reparación
    scavNamed.attack("Intruder");
    scavNamed.takeDamage(30);
    scavNamed.beRepaired(20);
    std::cout << std::endl;

    // 5. Crear una copia de otro FragTrap
    FragTrap scavCopy(scavNamed);
    scavCopy.attack("Another Intruder");
    scavCopy.highFivesGuys();
    std::cout << std::endl;

    // 6. Probar el operador de asignación
    FragTrap scavAssigned = scavDefault;
    scavAssigned.attack("Random Target");
    std::cout << std::endl;

    scavAssigned.takeDamage(30);
    scavAssigned.beRepaired(20);

    std::cout << std::endl;

    return 0;
}

