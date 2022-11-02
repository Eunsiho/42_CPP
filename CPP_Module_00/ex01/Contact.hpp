#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class	Contact
{
	private :
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public :
		Contact();
		~Contact();
		std::string	get_first_name_4_table();
		std::string	get_last_name_4_table();
		std::string	get_nickname_4_table();
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
		void		print_information();
		void		set_information();
};

#endif