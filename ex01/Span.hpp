/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:50:34 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/17 14:38:21 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>
#include <cstdlib>
#include <ctime>

class Span {
    private:
        std::vector<int> _values;
        unsigned int _N;
    public:
        Span();
        Span(const long long N);
        ~Span();
        Span(const Span& other);
        Span& operator=(const Span& other);

        void addNumber(const int n);
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();
        void printValues() const;

        class maxValuesReached : public std::exception {
            const char* what() const noexcept override;
        };
        class negativeValue : public std::exception {
            const char* what() const noexcept override;
        };
};