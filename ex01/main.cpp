/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:50:38 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/17 15:39:32 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    std::srand(std::time(nullptr)); 

    std::cout << "Overflow checks: \n" << std::endl;
    try {
        Span sp = Span(135810350813581355);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Span sp = Span(-5);
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "\n--------------------------------------------------------------" << "\n\n";
    std::cout << "Trying the addNumber() function: \n" << std::endl;
    try {
        Span sp = Span(5);
        sp.addNumber(2);
        sp.addNumber(1);
        sp.addNumber(300);
        sp.addNumber(200);
        sp.addNumber(1000);
        sp.printValues();
        std::cout << "Shortest span is: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span is: " << sp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "\n--------------------------------------------------------------" << "\n\n";

    std::cout << "Trying the addNumbers() function: \n" << std::endl;
    try {
        Span muchSp = Span(5);
        std::vector<int> muchValues = {2, 1, 300, 200, 1000};
        muchSp.addNumbers(muchValues.begin(), muchValues.end());
        muchSp.printValues();
        std::cout << "Shortest span is: " << muchSp.shortestSpan() << std::endl;
        std::cout << "Longest span is: " << muchSp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << "\n--------------------------------------------------------------" << "\n";

    std::cout << "\nTrying the shorestSpan and longestSpan with no numbers stored: \n" << std::endl;

    try {
        Span noNum = Span();
        std::cout << "Shortest span is: " << noNum.shortestSpan() << std::endl;
        std::cout << "Longest span is: " << noNum.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "\n--------------------------------------------------------------" << "\n";
        
    std::cout << "\nTrying the shorestSpan and longestSpan with 1 number stored: \n" << std::endl;
    try {
        Span oneNum = Span(1);
        oneNum.addNumber(1);
        std::cout << "Shortest span is: " << oneNum.shortestSpan() << std::endl;
        std::cout << "Longest span is: " << oneNum.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n--------------------------------------------------------------" << "\n";

    std::cout << "\nTrying the shorestSpan and longestSpan with 2 numbers stored: \n" << std::endl;
    
    try {
        Span twoNum = Span(2);
        twoNum.addNumber(1);
        twoNum.addNumber(100);
        std::cout << "Shortest span is: " << twoNum.shortestSpan() << std::endl;
        std::cout << "Longest span is: " << twoNum.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    std::cout << "\n--------------------------------------------------------------" << "\n\n";
    
    std::cout << "Trying the addNumbers() function with 10000 numbers: \n" << std::endl;
    
    try {
        Span bigSp = Span(10000);
        std::vector<int> bigValues(10000);
        for (int i = 0; i < 10000; ++i) {
            bigValues[i] = rand();
        }
        bigSp.addNumbers(bigValues.begin(), bigValues.end());
        bigSp.printValues();
        std::cout << "Shortest span is: " << bigSp.shortestSpan() << std::endl;
        std::cout << "Longest span is: " << bigSp.longestSpan() << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}