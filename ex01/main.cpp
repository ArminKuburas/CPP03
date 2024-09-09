/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:50:26 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/09 19:51:47 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a("Man I got Scavs");
	ScavTrap b("Scavenger");
	ScavTrap c(a);
	ScavTrap d("ScavTrap");

	d = b;

	a.attack("Scavenger");
	b.takeDamage(5);
	c.beRepaired(5);
	d.ClapTrap::attack("Enemy");
}