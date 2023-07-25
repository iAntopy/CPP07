/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 23:00:31 by iamongeo          #+#    #+#             */
/*   Updated: 2023/07/24 23:41:58 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>


template <typename T>
void    iter(T* arr, size_t size, void (*func)(T))
{
	for (size_t i=0; i < size; ++i)
		func(arr[i]);
}


/// Test functions and class to use with the iter template function.
template <typename T>
void    print_elem(T elem)
{  
	std::cout << elem << ", ";
}

template <typename T>
void    print_square(T elem)
{  
	std::cout << elem * elem << ", ";
}

class Test
{
	public:
		int		x;
		float	y;
		double	z;

		Test(int x, float y, double z): x(x), y(y), z(z) {}
		Test	operator*(Test& other) {return (Test(x * other.x, y * other.y, z * other.z));}
};
std::ostream&	operator<<(std::ostream& o, const Test& t) {
	std::cout << "Test(x: " << t.x << ", y: " << t.y << ", z: " << t.z << ")";
	return (o);
}

#endif