/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 03:27:42 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/07 09:48:38 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileCorrector.hpp"

int	main(int argc, char **argv)
{
	std::ifstream	inputFile;
	std::ofstream	outputFile;

	if (argc != 4)
		std::cerr << "need 3 args" << std::endl;
	else
	{
		std::string		fileName(argv[1]);
		inputFile.open(fileName);
		outputFile.open(fileName + ".replace");
		if (inputFile.fail() || outputFile.fail())
			std::cerr << "file open error" << std::endl;
		FileCorrector fileCorrector(argv[2], argv[3], inputFile, outputFile);
		fileCorrector.correct2outputFile();
	}
}