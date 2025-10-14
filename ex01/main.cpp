/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:50:38 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/14 15:08:43 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    Span sp = Span(5);

    try {
        sp.addNumber(400);
        sp.addNumber(190);
        sp.addNumber(50);
        sp.addNumber(300);
        sp.addNumber(350);
        sp.addNumber(34);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    sp.printValues();
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    std::cout << "\n--------------------------------------------------------------" << "\n\n";

    Span muchSp = Span(12);
    try {
        std::vector<int> muchValues = {5, 6, 100, 500, 10000, 20000, 1, 1000000, -400, -1000, 70000, 50000, 123};
        muchSp.addNumbers(muchValues.begin(), muchValues.end());
        muchSp.printValues();
        std::cout << "Shortest span: " << muchSp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << muchSp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}