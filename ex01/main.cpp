/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:59:22 by iamongeo          #+#    #+#             */
/*   Updated: 2023/07/24 23:46:39 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int     int_arr[6] = {6, 5, 4, 3, 2, 1};
    float   float_arr[9] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f};
    Test    test_arr[4] = { Test(1, 2.2f, 4.999999999),
                            Test(0, 0.0f, 0.0),
                            Test(42, -42.42f, -99999999999.999999999),
                            Test(-999, 0.000000000000000000123f, 0.01100000000010101001000000110101)};
    
    std::cout << "Printing int array" << std::endl;
    iter(int_arr, 6, print_elem);
    std::cout << std::endl << "Printing float array" << std::endl;
    iter(float_arr, 9, print_elem);
    std::cout << std::endl << "Printing Test array" << std::endl;
    iter(test_arr, 4, print_elem);
    std::cout << std::endl;

    std::cout << std::endl << "Printing squared int array" << std::endl;
    iter(int_arr, 6, print_square);
    std::cout << std::endl << "Printing squared float array" << std::endl;
    iter(float_arr, 9, print_square);
    std::cout << std::endl << "Printing squared Test array" << std::endl;
    iter(test_arr, 4, print_square);
    std::cout << std::endl;
    return (0);
}