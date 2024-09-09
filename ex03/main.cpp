/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:41:13 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/09 20:41:30 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("DiamondTrap");

	a.attack("Clap my Trap");
	a.takeDamage(5);
	a.beRepaired(5);
	a.highFivesGuys();
	a.guardGate();
	a.whoAmI();
	return (0);
}