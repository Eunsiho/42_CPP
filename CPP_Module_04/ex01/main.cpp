/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:39:29 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/29 15:47:16 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* animals[7];

	for (int i = 0; i < 3; ++i)
	{
		std::cout << "dog: " << i << std::endl;
		animals[i] = new Dog();
	}
	for (int i = 3; i < 6; ++i)
	{
		std::cout << "cat: " << i << std::endl;
		animals[i] = new Cat();
	}

	std::cout << "animal : 6" << std::endl;
	animals[6] = new Animal();

	for (int i = 0; i < 7; ++i)
	{
		std::cout << "destruct: " << i << std::endl;
		delete animals[i];
	}

	return (0);
}