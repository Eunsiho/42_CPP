#ifndef PHONEBOOK_H
# define PHONEBOOK_H

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
