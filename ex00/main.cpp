#include "ClapTrap.hpp"

int main() {
    // Crear un ClapTrap por defecto
    ClapTrap defaultClap;
    std::cout << std::endl;

    // Crear un ClapTrap con nombre
    ClapTrap namedClap("Godofredo");
    std::cout << std::endl;

    // Probar el ataque
    namedClap.attack("Noname :(");
    std::cout << std::endl;

    // Probar tomar daño
    namedClap.takeDamage(5);
    namedClap.takeDamage(7); // Probar reducción a 0
    std::cout << std::endl;

    // Probar reparación
    namedClap.beRepaired(3);
    namedClap.beRepaired(5); // Probar límite de energía
    std::cout << std::endl;

    // Copiar un ClapTrap
    ClapTrap copyClap(namedClap);
    std::cout << std::endl;

    // Asignar un ClapTrap
    ClapTrap anotherClap("Villain");
    anotherClap = namedClap;
    std::cout << std::endl;

    // Probar interacción con un ClapTrap sin puntos de energía
    namedClap.takeDamage(3);
    namedClap.attack("Enemy2");
    namedClap.beRepaired(2);
    std::cout << std::endl;

    return 0;
}
