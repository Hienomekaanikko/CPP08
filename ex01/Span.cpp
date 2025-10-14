/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:50:36 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/14 15:05:02 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0) {}
    
Span::Span(const unsigned int N): _N(N){}

Span::~Span() {}

Span::Span(const Span& other) {
    _N = other._N;
    _values = other._values;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        _N = other._N;
        _values = other._values;
    }
    return *this;
}

const char* Span::maxValuesReached::what() const noexcept {
    return "cannot add more numbers, max values reached.";
}

void Span::addNumber(const int n) {
    if (_values.size() >= _N)
        throw maxValuesReached();
    _values.push_back(n);
}

int Span::shortestSpan() {
    if (_values.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    std::vector<int> diffs(_values.size()); 
    std::sort(_values.begin(), _values.end());
    std::adjacent_difference(_values.begin(), _values.end(), diffs.begin());
    auto shortest = std::min_element(diffs.begin() + 1, diffs.end());
    return *shortest;
}

int Span::longestSpan() {
    if (_values.size() < 2)
        throw std::runtime_error("Not enough numbers to find a span");
    auto min = std::min_element(_values.begin(), _values.end());
    auto max = std::max_element(_values.begin(), _values.end());
    return *max - *min;
}

void Span::printValues() const {
    for (auto it = _values.begin(); it != _values.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    if (_values.size() + std::distance(begin, end) > _N)
        throw std::runtime_error("Not enough space in Span to add all numbers");
    for (auto it = begin; it != end; ++it) {
        _values.push_back(*it);
    }
}