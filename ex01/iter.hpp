/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 23:00:31 by iamongeo          #+#    #+#             */
/*   Updated: 2023/07/30 19:18:08 by marvin           ###   ########.fr       */
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

#endif