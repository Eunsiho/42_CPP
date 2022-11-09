/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCorrector.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 03:20:52 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/06 09:08:03 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileCorrector.hpp"

FileCorrector::FileCorrector() {};

FileCorrector::FileCorrector(char *str1, char *str2, std::ifstream& inputFile, std::ofstream& outputFile)
	: s1(str1), s2(str2), forReadFile(&inputFile), forWriteFile(&outputFile)
{};

FileCorrector::~FileCorrector() {};

void FileCorrector::correct2outputFile(void)
{
	std::string				line;
	std::string::size_type	pos;
	std::string::size_type	count;
	
	while (std::getline(*(this->forReadFile), line))
	{
		pos = line.find(this->s1);
		if (pos == std::string::npos)
		{
			
		}
	}
}