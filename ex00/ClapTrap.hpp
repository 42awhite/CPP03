#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		~ClapTrap();
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif 
