/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 23:48:15 by iamongeo          #+#    #+#             */
/*   Updated: 2023/07/25 19:01:24 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	
///// Copy and assignments tests
	std::cout << std::endl << "Copy and assignments tests :" << std::endl;
	Array<int>   arr1;
	Array<int>   arr2(10);

	arr2[6] = 66;
	arr2[7] = 77;
	arr2[8] = 88;

	Array<int>   arr3(arr2);

	arr1 = arr3;
	
	arr1[1] = 1;
	arr1[2] = 2;
	arr1[3] = 3;
	arr1[arr1.size() - 1] = 99;
	
	arr2[6] = 42;
	arr2[7] = 0;
	arr2[8] = -42;

	arr3[1] = 3;
	arr3[2] = 2;
	arr3[3] = 1;
	
	std::cout << std::endl << "Original and 2 copies able to be modified independantly because a deep copy is performed in Array copy constructor and Array copy operator." << std::endl;
	std::cout << arr1 << std::endl;
	std::cout << arr2 << std::endl;
	std::cout << arr3 << std::endl;
	
	
///// Accessor Tests
	std::cout << std::endl << "Accessor Tests :" << std::endl;
	try {
		std::cout << "arr1 index 1 : " << arr1[1] << std::endl; }
	catch (std::exception &e) {
		std::cerr << "Error while indexing array : " << e.what() << std::endl; }
	
	try {
		std::cout << "arr1 index -1 : " << arr1[-1] << std::endl;}
	catch (std::exception &e) {
		std::cerr << "Error while indexing array : " << e.what() << std::endl; }
	
	try {
		std::cout << "arr1 index == size : " << arr1[arr1.size()] << std::endl; }
	catch (std::exception &e) {
		std::cerr << "Error while indexing array : " << e.what() << std::endl; }

	try {
		std::cout << "arr1 index == size - 1 : " << arr1[arr1.size() - 1] << std::endl; }
	catch (std::exception &e) {
		std::cerr << "Error while indexing array : " << e.what() << std::endl; }


///// Templating Tests

	std::cout << std::endl << "Templating tests :" << std::endl;
	
	Array<double>		darr(3);
	Array<std::string>	sarr(3);
	Array< Array<int> >	arrarr(3);

	darr[0]	= 99.199999999;
	darr[1]	= -99.199999999;
	darr[2]	= -91919999999999.0000000000001;

	std::cout << darr << std::endl;

	sarr[0] = "Hello";
	sarr[1] = "Good";
	sarr[2] = "Friend";

	std::cout << sarr << std::endl;

	arrarr[0] = arr1;
	arrarr[1] = arr2;
	arrarr[2] = arr3;
	
	std::cout << arrarr << std::endl;

	return (0);
}