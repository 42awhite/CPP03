#include "ScavTrap.hpp"

int main() {
    // 1. Crear un ScavTrap por defecto
    ScavTrap scavDefault;
    std::cout << std::endl;

    // 2. Crear un ScavTrap con un nombre
    ScavTrap scavNamed("Guardian");
    std::cout << std::endl;

    // 3. Usar el método guardGate()
    scavNamed.guardGate();
    std::cout << std::endl;

    // 4. Probar ataque, daño y reparación
    scavNamed.attack("Intruder");
    scavNamed.takeDamage(30);
    scavNamed.beRepaired(20);
    std::cout << std::endl;

    // 5. Crear una copia de otro ScavTrap
    ScavTrap scavCopy(scavNamed);
    scavCopy.attack("Another Intruder");
    scavCopy.guardGate();
    std::cout << std::endl;

    // 6. Probar el operador de asignación
    ScavTrap scavAssigned = scavDefault;
    scavAssigned.attack("Random Target");
    std::cout << std::endl;

    return 0;
}
