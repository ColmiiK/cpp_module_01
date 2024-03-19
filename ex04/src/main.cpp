/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:33:23 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/19 12:56:21 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int printError(std::string msg){
	std::cerr << msg << std::endl;
	return (1);
}

int main(int ac, char **av) {
	if (ac != 4){
		return (printError("Incorrect number of arguments"));
	}
	std::ifstream file(av[1]);
	std::string line;
	std::string text;
	
	if (file.is_open()){
		while (std::getline(file, line)){
			text.append(line);
		}
		file.close();
	}
	else
		return (printError("Unable to open file"));


}