/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:22:22 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/12 13:27:06 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("Clap my Trap");
	ClapTrap b("Clap Whos Trap?");
	ClapTrap c(a);
	ClapTrap d("ClapTrap");
	ClapTrap e;

	d = b;

	a.attack("Clap Whos Trap?");
	b.takeDamage(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.beRepaired(5);
	c.takeDamage(5);
	c.attack("banana");
	d.attack("Clap my Trap");
	a.takeDamage(5);
	d.attack("Clap my Trap");
	a.takeDamage(5);
	d.attack("Clap my Trap");
	a.takeDamage(5);
	a.attack("Clap Whos Trap?");
	return (0);
}