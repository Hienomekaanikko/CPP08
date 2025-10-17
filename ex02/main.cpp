/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:14:40 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/17 15:42:20 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    std::cout << "Testing with MutantStack:\n" << std::endl;
    {    
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    }

    std::cout << "\n-------------------------------------------------------\n";
    std::cout << "\nTesting the same with list (should match the MutantStack to confirm it's correct functionality):\n" << std::endl;
    std::list<int> list;
    list.push_back(5);
    list.push_back(17);
    std::cout << list.back() << std::endl;
    list.pop_back();
    std::cout << list.size() << std::endl;
    list.push_back(3);
    list.push_back(5);
    list.push_back(737);
    list.push_back(0);
    std::list<int>::iterator it = list.begin();
    std::list<int>::iterator ite = list.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    
    std::cout << "\n-------------------------------------------------------\n";
    std::cout << "\nWhat normal stack would do (access to the top element only until it gets popped):\n" << std::endl;
    std::stack<int> stack;
    stack.push(9);
    stack.push(8);
    stack.push(7);
    stack.push(6);
    stack.push(5);
    stack.push(4);
    stack.push(3);
    stack.push(2);
    stack.push(1);
    stack.push(0);

    for (int i = 0; i < 10; i++) {
        std::cout << "Element on top: " << stack.top() << std::endl;
        std::cout << "**pop**" << std::endl;
        stack.pop();
    }
    
    std::cout << "\n-------------------------------------------------------\n";
    std::cout << "\nWhat mutant stack does (can iterate from bottom to top without popping anything):\n" << std::endl;
    {    
    MutantStack<int> mstack;
    mstack.push(9);
    mstack.push(8);
    mstack.push(7);
    mstack.push(6);
    mstack.push(5);
    mstack.push(4);
    mstack.push(3);
    mstack.push(2);
    mstack.push(1);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << "\nReverse iteration (top to bottom):\n" << std::endl;
    
    MutantStack<int>::reverse_iterator rit = mstack.rbegin();
    MutantStack<int>::reverse_iterator rite = mstack.rend();
    while (rit != rite)
    {
        std::cout << *rit << std::endl;
        ++rit;
    }
    }
    return 0;
}