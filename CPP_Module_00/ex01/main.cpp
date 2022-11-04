/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:21:00 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/04 00:21:01 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "./Contact.hpp"
#include "./PhoneBook.hpp"

void	print_menu()
{
	std::cout << "---Commands---" << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "ADD" << std::endl;
	std::cout << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
	std::cout << "--------------" << std::endl;
	std::cout << "Enter your command" << std::endl;
}

int	main(void)
{
	std::string	command;
	PhoneBook	my_phonebook;

	print_menu();
	std::getline(std::cin, command);
	while(command.compare("EXIT") != 0 && !std::cin.eof())
	{
		if (command.compare("ADD") == 0)
			my_phonebook.add_contact();
		else if (command.compare("SEARCH") == 0)
			my_phonebook.search_contact();
		else
			std::cout << std::endl <<"please enter the correct command!" << std::endl << std::endl;
		print_menu();
		std::getline(std::cin, command);
	}
	std::cout << std::endl << "Exit program" << std::endl;
	return (0);
}
