/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 06:29:08 by etorun            #+#    #+#             */
/*   Updated: 2026/08/17 06:29:08 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		MutantStack();
		MutantStack(const MutantStack<T> & source);
		MutantStack<T> &operator=(const MutantStack<T> & other);
		~MutantStack();
		iterator		begin();
		iterator		end();
		const_iterator	begin() const;
		const_iterator	end() const;
};

# include "MutantStack.tpp"
#endif