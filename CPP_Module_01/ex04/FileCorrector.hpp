/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileCorrector.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 03:20:50 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/07 09:57:36 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FILECORRECTOR_HPP
# define	FILECORRECTOR_HPP
# include <iostream>
# include <fstream>

class FileCorrector
{
private:
	std::string		s1;
	std::string		s2;
	std::istream	*forReadFile;
	std::ostream	*forWriteFile;
public:
	FileCorrector();
	FileCorrector(char *s1, char *s2, std::ifstream& forReadFile, std::ofstream& forWriteFile);
	~FileCorrector();
	void	correct2outputFile(void);
};

#endif