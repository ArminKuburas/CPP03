/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:41:13 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/11 13:45:45 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	{
		DiamondTrap a("DiamondTrap");

		a.attack("Clap my Trap");
		a.takeDamage(5);
		a.beRepaired(5);
		a.highFivesGuys();
		a.guardGate();
		a.whoAmI();
	}
	{
		DiamondTrap a("DiamondTrap");
		DiamondTrap b("DiamondTrap2");

		a = b;
		a.whoAmI();
	}
	{
		DiamondTrap a("Diamond In Da Trap");
		
		a.takeDamage(100);
		a.attack("Clap my Trap");
		a.beRepaired(100);
		
	}
	return (0);
}