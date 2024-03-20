/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:11:31 by alvega-g          #+#    #+#             */
/*   Updated: 2024/03/20 16:41:31 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>
# include <map>

enum LogLevel {
	INVALID,
	DEBUG,
	INFO,
	WARNING,
	ERROR,
};

class Harl {
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		typedef void (Harl::*ptrFunc)( void );
		std::map<std::string, ptrFunc> mapFunc;
	public:
		Harl( void );
		~Harl( void );
		void complain( std::string level );
		void insignificant( void );
};

#endif