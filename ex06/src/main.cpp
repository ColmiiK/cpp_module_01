/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:11:20 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/20 16:41:51 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int main( int ac, char **av ) {
	Harl h;
	if (ac != 2)
		return (1);
	std::map<std::string, LogLevel> mapLevel;
	mapLevel["INVALID"] = INVALID;
    mapLevel["DEBUG"] = DEBUG;
    mapLevel["INFO"] = INFO;
    mapLevel["WARNING"] = WARNING;
    mapLevel["ERROR"] = ERROR;
	LogLevel level = INVALID;
	level = mapLevel[av[1]];
	switch (level)
	{
	case DEBUG:
		h.complain("DEBUG");
		break;
	case INFO:
		h.complain("INFO");
		break;
	case WARNING:
		h.complain("WARNING");
		break;
	case ERROR:
		h.complain("ERROR");
		break;
	default:
		h.insignificant();
		break;
	}
	return (0);
}