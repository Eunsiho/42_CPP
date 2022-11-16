/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 03:27:42 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/16 18:24:48 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileCorrector.hpp"

int	main(int argc, char **argv)
{

	if (argc != 4)
		std::cerr << "need 3 args" << std::endl;
	else
	{
		FileCorrector	fileCorrector(argv[1], argv[2], argv[3]);
		fileCorrector.fileCorrect();
	}
}