/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:07:31 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/12 13:13:17 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "\033[1;32mDefault FragTrap " << this->_name << " has been created!\033[0m" << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "\033[1;32mFragTrap " << this->_name << " has been created!\033[0m" << std::endl;
	this->_hitpoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& source) : ClapTrap(source)
{
	std::cout << "\033[1;32mFragTrap " << this->_name << " has been copied!\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;32mFragTrap " << this->_name << " has been destroyed!\033[0m" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		std::cout << "\033[1;32mFragTrap " << this->_name << " is now " << other._name << "\033[0m" << std::endl;
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hitpoints < 1 || this->_energyPoints < 1)
		std::cout << "\033[1;32mFragTrap " << this->_name << " is out of hit points or energy points!\033[0m" << std::endl;
	else
		std::cout << "\033[1;32mFragTrap " << this->_name << " requests a positive high five!\033[0m" << std::endl;
}
