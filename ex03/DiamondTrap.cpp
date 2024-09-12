/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:26:32 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/12 13:11:33 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_name = "DiamondTrap";
	this->ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpoints = this->FragTrap::_hitpoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "\033[1;36mDefault DiamondTrap " << this->_name << " has been created!\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->_name = name;
	this->_hitpoints = this->FragTrap::_hitpoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	std::cout << "\033[1;36mDiamondTrap " << this->_name << " has been created!\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& source) : ClapTrap(source), ScavTrap(source), FragTrap(source)
{
	this->_name = source._name;
	std::cout << "\033[1;36mDiamondTrap " << this->_name << " has been copied!\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[1;36mDiamondTrap " << this->_name << " has been destroyed!\033[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		std::cout << "\033[1;36mDiamondTrap " << this->_name << " is now " << other._name << "\033[0m" << std::endl;
		this->ClapTrap::_name = other.ClapTrap::_name;
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{

	if (this->_energyPoints < 1 || this->_hitpoints)
		std::cout << "\033[1;36mDiamondTrap " << this->_name << " is out of hitpoints or energy points " << "\033[0m" << std::endl;
	else
		std::cout << "\033[1;36mDiamondTrap " << this->_name << " is also known as " << this->ClapTrap::_name << "\033[0m" << std::endl;
}