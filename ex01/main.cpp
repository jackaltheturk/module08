/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:22:26 by etorun            #+#    #+#             */
/*   Updated: 2026/08/16 15:22:26 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << "Subject code test."<< std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

    try 
    {
        Span large(15000);
		large.addNumber(1);
		large.addNumber(2);
		large.addNumber(3);
        std::vector<int> source;
        
        for (int i = 10004; i <= 25000; ++i) 
        {
            source.push_back(i); 
        }
        large.addNumber(source.begin(), source.end());
        std::cout << "Shortest Span: " << large.shortestSpan() << std::endl;
        std::cout << "Longest Span : " << large.longestSpan() << std::endl;
		large.addNumber(4);

    } 
    catch (const std::exception& e) 
    {
        std::cout << e.what() << std::endl;
    }
}