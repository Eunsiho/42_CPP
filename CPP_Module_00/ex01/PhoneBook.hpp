/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 00:21:13 by hogkim            #+#    #+#             */
/*   Updated: 2022/11/04 00:21:14 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "./Contact.hpp"

class	PhoneBook
{
private :
	Contact	array[8];
	int		index;

	int		get_index_2_search(std::string &str);
public :
	PhoneBook();
	~PhoneBook();
	void	print_table(); // private으로 바꿔주기
	void	add_contact();
	void	search_contact();
};

#endif
