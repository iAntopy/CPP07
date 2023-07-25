/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 23:48:50 by iamongeo          #+#    #+#             */
/*   Updated: 2023/07/25 04:11:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T> 
class Array
{
	private:
		const uint32_t	_size;
		T*				_data;

	public:

		Array<T>(void);
		Array<T>(uint32_t n);
//		Array(const Array& other);
//		Array&	operator=(const Array& other);
//		T&	operator[](uint32_t i) const;
		~Array<T>(void);

		uint32_t	size(void) const;
}; 

# include "Array.tpp"

#endif