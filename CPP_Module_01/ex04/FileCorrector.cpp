/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCorrector.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 03:20:52 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 16:41:54 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileCorrector.hpp"
#include <iostream>
#include <fstream>

FileCorrector::FileCorrector(std::string av1, std::string av2, std::string av3)
	: _fileName(av1), _s1(av2), _s2(av3)
{ };

FileCorrector::~FileCorrector()
{ };

bool FileCorrector::fileOpen(std::ifstream& inputFile, std::ofstream& outputFile)
{
	inputFile.open(_fileName);
	if (!inputFile.is_open())
	{
		std::cerr << "file open error" << std::endl;
		return (false);
	}
	outputFile.open(_fileName + ".replace");
	if (!outputFile.is_open())
	{
		std::cerr << "file open error" << std::endl;
		return (false);
	}
	return (true);
}

void FileCorrector::readAll(std::ifstream& inputFile, std::string& contetns)
{
	std::string::size_type	size;

	inputFile.seekg(0, std::ios::end);
	size = inputFile.tellg();
	contetns.resize(size);
	inputFile.seekg(0, std::ios::beg);
	inputFile.read(&contetns[0], size);
}

void FileCorrector::correctContents(std::string& contents)
{
	std::string::size_type	pos = 0;
	
	while (this->_s1 != "")
	{
		pos = contents.find(_s1, pos);
		if (pos == std::string::npos)
			break;
		contents.erase(pos, _s1.length());
		contents.insert(pos, _s2);
		pos += _s2.length();
	}
}

void	FileCorrector::fileCorrect()
{
	std::ifstream	inputFile;
	std::ofstream	outputFile;
	std::string		contents;

	if (fileOpen(inputFile, outputFile))
	{
		readAll(inputFile, contents);
		correctContents(contents);
		outputFile << contents;
	}
}
