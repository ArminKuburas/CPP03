/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:41:13 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/12 16:42:00 by akuburas         ###   ########.fr       */
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
	std::cout << std::endl;
	{
		DiamondTrap a("DiamondTrap");
		DiamondTrap b("DiamondTrap2");

		a = b;
		a.whoAmI();
	}
	std::cout << std::endl;
	{
		DiamondTrap a("Diamond In Da Trap");
		
		a.takeDamage(100);
		a.attack("Clap my Trap");
		a.beRepaired(100);
		a.guardGate();
		a.highFivesGuys();
		a.whoAmI();
		
	}
	std::cout << std::endl;
	{
		DiamondTrap original;
		DiamondTrap pappy(original);

		pappy.guardGate();
		pappy.takeDamage(10);
		pappy.whoAmI();
	}
	return (0);
}