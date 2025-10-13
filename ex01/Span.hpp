/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:50:34 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/13 16:02:57 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <array>

class Span {
    private:
        std::array<int, N> _array;
        unsigned int N;
    public:
        Span();
        Span(const unsigned int N);
        ~Span();
        Span(const Span& other);
        Span& operator=(const Span& other);

        void addNumber();
        void shortestSpan();
        void longestSpan();
    };