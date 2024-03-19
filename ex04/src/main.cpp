/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 12:33:23 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/19 16:15:02 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <main.hpp>

int main(int ac, char **av) {
	if (ac != 4){
		return (printError("Incorrect number of arguments"));
	}
	std::ifstream file(av[1]);
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string replaced;
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
	int start = text.find(s1);
	int len = s1.length();
	replaced.copy(text, text.length(), 0);
	while (start != -1) {
		replaced.erase(start, len);
		for (int i = 0; i < s2.length(); i++){
			replaced.insert(start, s2[i]);
		}
	}

	std::cout << replaced << std::endl;
	
	

}