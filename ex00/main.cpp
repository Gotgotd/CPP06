/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:56:55 by gdaignea          #+#    #+#             */
/*   Updated: 2024/10/09 14:46:46 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int ac, char **av) {

	ScalarConverter converter;
	
	if (ac == 2) {
		converter.convert(av[1]);
	}
	else 
		std::cout << "Please provide a char, int, double or float to run the program" << std::endl;
	return 0;
}