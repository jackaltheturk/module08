/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 15:22:34 by etorun            #+#    #+#             */
/*   Updated: 2026/08/16 15:22:34 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{ 
    _N = 0;
}

Span::Span(unsigned int n)
{
    _N = n;
}

Span::Span(const Span& copy)
{
    this->_N = copy._N;
    this->_store = copy._store;
}

Span::~Span()
{
}

Span& Span::operator=(const Span& other)
{
    if (this != &other)
    {
        this->_N = other._N;
        this->_store = other._store;
    }
    return *this;
    
}

void Span::addNumber(int number) {
    if (_store.size() >= _N) 
        throw std::out_of_range("No space left to store new value!");
    _store.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
        {
            if (std::distance(start, end) + _store.size() > _N)
                throw std::out_of_range("The source data is larger than the remaining space.!!!");
            
            _store.insert(_store.end(), start, end);
        }
		
int Span::shortestSpan()
{
    if (_store.size() < 2)
        throw std::out_of_range("Not enough elements in the array!");

    std::vector<int> copy = _store;
    std::sort(copy.begin(), copy.end());

    int min_span = copy[1] - copy[0];
    for (size_t i = 1; i < copy.size() - 1; i++)
    {
        int diff = copy[i + 1] - copy[i];
        if (diff < min_span)
            min_span = diff;
    }
    
    return min_span;
}

int Span::longestSpan()
{
    if (_store.size() < 2)
        throw std::out_of_range("Not enough elements in the array!!");

    int min = *std::min_element(_store.begin(), _store.end());
    int max = *std::max_element(_store.begin(), _store.end());

    return max - min;
}
