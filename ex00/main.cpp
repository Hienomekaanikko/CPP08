/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:41:47 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/13 15:48:55 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

const char* valueNotFoundException::what() const noexcept {
    return "value was not found";
};

int main(void) {
    {
    std::vector<int> v = {34, 5, 4, 26, 8, 1, 0};
    try {
        auto it = easyfind(v, 0);
        std::cout << "value " << *it << " was found from index " << std::distance(v.begin(), it) << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        auto it = easyfind(v, 100);
        std::cout << "value " << *it << " was found from index " << std::distance(v.begin(), it) << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    }
    {
    std::vector<char> v = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    try {
        auto it = easyfind(v, 'c');
        std::cout << "value " << *it << " was found from index " << std::distance(v.begin(), it) << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try {
        auto it = easyfind(v, 'o');
        std::cout << "value " << *it << " was found from index " << std::distance(v.begin(), it) << std::endl;
    } catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    }
}