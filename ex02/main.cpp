/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:12:36 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/09 20:13:56 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	FragTrap a("Man I got Frags");
	FragTrap b("Fragger");
	FragTrap c(a);
	FragTrap d("FragTrap");
	ScavTrap e("ScavTrap");

	d = b;

	a.attack("Fragger");
	b.takeDamage(5);
	c.beRepaired(5);
	d.highFivesGuys();
	e.attack("Fragger");
}