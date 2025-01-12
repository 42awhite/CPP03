#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap parameterized constructor called for " << _name << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
    std::cout << "FragTrap copy constructor called for " << _name << std::endl;
}

// Destructor
FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called for " << _name << std::endl;
}


// Copy assignment operator
FragTrap & FragTrap::operator=(const FragTrap &other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap assignment operator called for " << _name << std::endl;
    return *this;
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << _name << " high-five the enemy! ;)" << std::endl;
}
