/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 06:13:52 by etorun            #+#    #+#             */
/*   Updated: 2026/08/15 07:23:34 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	std::deque<int> dequ;
	dequ.push_back(5);
	dequ.push_front(4);
	dequ.push_back(6);
	std::cout << "TEST FOR VECTOR"<< std::endl;
	try
    {
        std::cout << "Vector {1,2,3} and we are searching for \"3\" in the vector." << std::endl;
        easyfind(vec,3);
		std::cout << "The given number was found in the vector." << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
	try
    {
        std::cout << "Vector {1,2,3} and we are searching for \"10\" in the vector." << std::endl;
        easyfind(vec,10);
		std::cout << "The given number was found in the vector." << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
	
	std::cout << "TEST FOR DEQUE"<< std::endl;
	
	try
    {
        std::cout << "Deque {4,5,6} and we are searching for \"4\" in the deque." << std::endl;
        easyfind(dequ,4);
		std::cout << "The given number was found in the deque." << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
	try
    {
        std::cout << "Deque {4,5,6} and we are searching for \"20\" in the deque." << std::endl;
        easyfind(dequ,20);
		std::cout << "The given number was found in the deque." << std::endl;
    }
    catch(const std::exception& e){
        std::cout << e.what() << std::endl;
    }
	return 0;
}