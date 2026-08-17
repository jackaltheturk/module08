/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:09:08 by etorun            #+#    #+#             */
/*   Updated: 2026/08/17 14:44:55 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
	std::cout << "*** MUTANTSTACK EXAMPLE ***" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "*** CONTROL EXAMPLE WITH LIST ***" << std::endl;
	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator itList = mlist.begin();
	std::list<int>::iterator iteList = mlist.end();
	++itList;
	--itList;
	while (itList != iteList)
	{
	std::cout << *itList << std::endl;
	++itList;
	}
	return 0;
}