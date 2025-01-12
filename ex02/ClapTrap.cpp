#include "ClapTrap.hpp"

//Default constructor
ClapTrap::ClapTrap() {
    _name = "Noname :(";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap default constructor called for " << _name << std::endl;
}

// Parameterized Constructor
ClapTrap::ClapTrap(const std::string& name) {
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap parametriced constructor called for " << _name << std::endl;
}

// Destructor
ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called for " << _name << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;

    std::cout << "ClapTrap copy constructor called for " << _name << std::endl;
}

// Assignment Operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap assignment operator called for " << _name << std::endl;
    return *this;
}

//Member funtions
void ClapTrap::attack(const std::string& target){
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        _energyPoints--;
        std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage! AUCH!" << std::endl;
    }
    else
        std::cout << _name << " cannot attack because it has no energy or is out of hit points." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= static_cast<int>(amount);
    if (_hitPoints < 0) 
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Hit points: = " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) 
    {
        _energyPoints--;
        _hitPoints += static_cast<int>(amount);
        std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points! Remaining hit points: " << _hitPoints << std::endl;
    } 
    else
        std::cout << "ClapTrap " << _name << " cannot repair because it has no energy or is out of hit points." << std::endl;
}
