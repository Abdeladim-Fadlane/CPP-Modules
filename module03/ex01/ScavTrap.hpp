#ifndef SCAVTARAP_HPP
#define SCAVTARAP_HPP
#include<iostream>
#include<string>
#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& obj);
        ScavTrap &operator=(const ScavTrap& obj);
        ~ScavTrap();
        ScavTrap(const std::string& target);
        void attack(const std::string& target);
        void guardGate();
};

#endif