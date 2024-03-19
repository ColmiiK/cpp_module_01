/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:53:12 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/19 12:26:56 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name) : name(name){
	std::cout << "HumanB " << name << " created with ";
	std::cout << "no weapon" << std::endl;
}

HumanB::~HumanB(void) {
	std::cout << "HumanB " << HumanB::name << " destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	HumanB::weapon = &weapon;
}

void HumanB::attack(void) {
	std::cout << name << " attacks with their ";
	std::cout << HumanB::weapon->getType() << std::endl;
}
