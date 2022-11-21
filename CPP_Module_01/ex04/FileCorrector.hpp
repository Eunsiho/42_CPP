/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCorrector.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 03:20:50 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/21 14:07:53 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FILECORRECTOR_HPP
# define	FILECORRECTOR_HPP
# include <iostream>
# include <fstream>

class FileCorrector
{
private:
	std::string	_fileName;
	std::string	_s1;
	std::string	_s2;

	bool	fileOpen(std::ifstream& inputFile, std::ofstream& outputFile);
	void	readAll(std::ifstream& inputFile, std::string& contetns);
	void	correctContents(std::string& contents);
public:
	FileCorrector(std::string av1, std::string av2, std::string av3);
	~FileCorrector();
	void	fileCorrect();
};

#endif