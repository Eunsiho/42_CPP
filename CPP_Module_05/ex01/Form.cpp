/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hogkim <hogkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:49:08 by hogkim            #+#    #+#             */
/*   Updated: 2022/12/02 16:21:46 by hogkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int signable, int executable)
	: _name(name), _signable(signable), _executable(executable)
{
	if (signable < 1 || executable < 1)
		throw (GradeTooHighException());
	else if (signable > 150 || executable > 150)
		throw (GradeTooLowException());
}

Form::Form()
	: _name("nameless"), _signed(false), _signable(1), _executable(1)
{ }

Form::Form(const Form& obj)
	: _name(obj.getName()), _signed(obj.getSigned()), _signable(obj.getSignable()), _executable(obj.getExecutable())
{ }

Form::~Form()
{ }

Form& Form::operator=(const Form& obj)
{
	*(const_cast<std::string*>(&this->_name)) = obj.getName();
	this->_signed = obj._signed;
	*(const_cast<int*>(&this->_signable)) = obj.getSignable();
	*(const_cast<int*>(&this->_executable)) = obj.getExecutable();
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high for Form");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low for Form");
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getSignable() const
{
	return (this->_signable);
}

int Form::getExecutable() const
{
	return (this->_executable);
}

void Form::beSigned(const Bureaucrat& obj)
{
	if (obj.getGrade() > this->getSignable())
		throw (GradeTooLowException());
	else if (this->_signed == false)
		this->_signed = true;
	else
		std::cout << "This form is already signed" << std::endl;
}

std::ostream& operator<<(std::ostream& ostm, const Form& obj)
{
	std::string	beSigned;
	
	if (obj.getSigned() == false)
		beSigned = "no";
	else
		beSigned = "yes";
	ostm << "form name: "<<obj.getName() << std::endl
	<< "signable grade: " << obj.getSignable()<< std::endl
	<< "executable grade: " << obj.getExecutable() << std::endl
	<< "signed: " << beSigned << std::endl;
	return (ostm);
}

사실 맨처음에는 다른건줄알았는데 틀린게맞다고 생각했던이유가
우리 공부스타일 키워드로 치면, 나는 약삭바름, 퍙그는 (게으른데) 집요함 같거든요
근데 나같은 공부스타일은 그냥 이대로 하면되는데요
퍙그스타일이면 공부량이 많아야 훨씬 엄청 좋은스타일같은데
공부량이 너무적으면서 많이하지도않으면서 왤케 집요하게 파려고하는지
지금생각났는데 항상 너무 답답한게 그거였어요 
진도도 빠르지않은데 지금 우리는 100미터가야하는데
1미터가고 무슨 돌맹이보여서
저돌맹이는 왜저럴까 저거 왜 안뾰족하고 동글동글하지이렇게 생각을하는데요
나같은경우에는 하루에 달리는 시간이 짧은거아니까
음 동글동글하구나 저런거또만나거나 나중에 이유알게되겠지하고넘어가요
팡그는 본인이 오늘 공부할 양이 2시간이였는데 지칠때까지 그거잡다가 큐~ 이만보고 내일 열심히해야지~ 이러거든요
지금 말하면서 막 아 내가맞아 끼워맞춰야지한게아니라
생각해보니까

그 게으른 집요함이 너무 맞는거같은게
평소에 성격이 집요한만큼 연습을 집요하게 안하는거같은게
정말 항상보면 컴퓨터지식 공부할때 저런 내가말한 돌멩이같은거 하루에 5개 익히면 뿌듯해도되요 그런집요함으로
1개의 돌맹이에 대한 지식을얻으면 그렇게 뿌듯해하는사람을 볼수가없어요
우리는 돌맹이 만개익혀야해요

그러면, 사실 앞으로도 퍙그가 보기에 퍙그