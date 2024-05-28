/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:43:31 by alvega-g          #+#    #+#             */
/*   Updated: 2024/05/28 15:57:20 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main( void ){
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "String -> " << &string << std::endl;
	std::cout << "Pointer -> " << &stringPTR << std::endl;
	std::cout << "Reference -> " << &stringREF << std::endl;

	std::cout << "String -> " << string << std::endl;
	std::cout << "Pointer -> " << stringPTR << std::endl;
	std::cout << "Reference -> " << stringREF << std::endl;
}
