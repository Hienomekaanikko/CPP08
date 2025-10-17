/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:14:53 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/17 16:02:58 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>9
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() = default;
    ~MutantStack() = default;
    MutantStack(const MutantStack& other) = default;
    MutantStack& operator=(const MutantStack& other) = default;

    using iterator = typename std::stack<T>::container_type::iterator;
    using const_iterator = typename std::stack<T>::container_type::const_iterator;
    using reverse_iterator = typename std::stack<T>::container_type::reverse_iterator;
    using const_reverse_iterator = typename std::stack<T>::container_type::const_reverse_iterator;

    iterator begin();
    iterator end();
    const_iterator begin() const;
    const_iterator end() const;
    
    reverse_iterator rbegin();
    reverse_iterator rend();
    const_reverse_iterator rbegin() const;
    const_reverse_iterator rend() const;
};

#include "MutantStack.tpp"