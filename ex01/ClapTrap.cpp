/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:05:57 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/10 22:28:34 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\033[33mDefault ClapTrap " << this->_name << " has been created!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\033[33mClapTrap " << this->_name << " has been created!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& source) : _name(source._name), _hitpoints(source._hitpoints), _energyPoints(source._energyPoints), _attackDamage(source._attackDamage)
{
	std::cout << "\033[33mClapTrap " << this->_name << " has been copied!\033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[33mClapTrap " << this->_name << " has been destroyed!\033[0m" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		std::cout << "\033[33mClapTrap " << this->_name << " is now " << other._name << "\033[0m" << std::endl;
		this->_name = other._name;
		this->_hitpoints = other._hitpoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0 && this->_hitpoints > 0)
	{
		std::cout << "\033[33mClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!\033[0m" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "\033[33mClapTrap " << this->_name << " is out of energy points or out of hit points!\033[0m" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints > 0)
	{
		std::cout << "\033[33mClapTrap " << this->_name << " takes " << amount << " points of damage!\033[0m" << std::endl;
		this->_hitpoints -= amount;
	}
	else
		std::cout << "\033[33mClapTrap " << this->_name << " is already out of hitpoints!\033[0m" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitpoints > 0 && this->_energyPoints > 0)
	{
		std::cout << "\033[33mClapTrap " << this->_name << " is being repaired for " << amount << " points!\033[0m" << std::endl;
		this->_hitpoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "\033[33mClapTrap " << this->_name << " is out of energy points or out of hit points!\033[0m" << std::endl;
}

