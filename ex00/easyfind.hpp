/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 14:41:45 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/14 11:01:15 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <vector>

class valueNotFoundException : public std::exception {
    const char* what() const noexcept override;
};

template<typename T> auto easyfind(T &v, int target) {
    auto it = std::find(v.begin(), v.end(), target);
    if (it == v.end())
        throw valueNotFoundException();
    return it;
}