/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:21:37 by etorun            #+#    #+#             */
/*   Updated: 2026/08/16 15:21:37 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <stdexcept>
#include <algorithm>
#include <iostream>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _store;
    public:
        Span();
        ~Span();
        Span(unsigned int n);
        Span(const Span& copy);
        Span& operator=(const Span& other);
       
        void addNumber(int number);
        void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
};

#endif