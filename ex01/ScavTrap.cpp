/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:44:42 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/09 19:50:05 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "\033[1;91mScavTrap " << this->_name << " has been created!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& source) : ClapTrap(source)
{
	std::cout << "\033[1;91mScavTrap " << this->_name << " has been copied!\033[0m" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;91mScavTrap " << this->_name << " has been destroyed!\033[0m" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		std::cout << "\033[1;91mScavTrap " << this->_name << " is now " << other._name << "\033[0m" << std::endl;
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitpoints > 0)
	{
		std::cout << "\033[1;91mScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!\033[0m" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "\033[1;91mScavTrap " << this->_name << " is out of energy points or out of hit points!\033[0m" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << "\033[1;91mScavTrap " << this->_name << " has entered in Gate keeper mode!\033[0m" << std::endl;
}