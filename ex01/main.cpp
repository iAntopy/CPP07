/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:59:22 by iamongeo          #+#    #+#             */
/*   Updated: 2023/08/02 15:04:12 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

/// Test class surving as other generic typename T object array the iter
/// function can iterator over and operate on. The multiply operator 
/// is implemented so that the print_square() function can multiply the 
/// iterated Test elements and multiply each by itself.
struct Test
{
	int		x;
	float	y;
	double	z;

	Test(int x, float y, double z): x(x), y(y), z(z) {}
	Test	operator*(Test& other) {return (Test(x * other.x, y * other.y, z * other.z));}
};

std::ostream&	operator<<(std::ostream& o, const struct Test& t) {
	std::cout << "Test(x: " << t.x << ", y: " << t.y << ", z: " << t.z << ")";
	return (o);
}


int main()
{
	int     int_arr[6] = {6, 5, 4, 3, 2, 1};
	float   float_arr[9] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f, 6.6f, 7.7f, 8.8f, 9.9f};
	Test    test_arr[4] = { Test(1, 2.2f, 4.999999999),
							Test(0, 0.0f, 0.0),
							Test(42, -42.42f, -99999999999.999999999),
							Test(-999, 0.000000000000000000123f, 0.01100)};
	
	std::cout << "Edge cases: " << std::endl;
//  std::cout << "Calling iter with NULL pointer array: " << std::endl;
	//iter(NULL, 5, print_elem);// DOES NOT COMPILE
	std::cout << "Calling iter with valid pointer array with length 0: " << std::endl;
	iter(int_arr, 0, print_elem);

	std::cout << std::endl << "Printing int array" << std::endl;
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