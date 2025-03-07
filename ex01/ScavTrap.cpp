#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called for " << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap parameterized constructor called for " << _name << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called for " << _name << std::endl;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called for " << _name << std::endl;
}


// Copy assignment operator
ScavTrap & ScavTrap::operator=(const ScavTrap &other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "ScavTrap assignment operator called for " << _name << std::endl;
    return *this;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << _name << " Scav attacks " << target << ", causing " << _attackDamage << " points of damage! AUCH!" << std::endl;
    }
    else
        std::cout << _name << " cannot Scav attack because it has no energy or is out of hit points." << std::endl;
}

