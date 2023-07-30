/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 23:48:50 by iamongeo          #+#    #+#             */
/*   Updated: 2023/07/25 18:54:49 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <cstring>

template <typename T> 
class Array
{
	private:
		uint32_t	_size;
		T*			_data;

		void	setSize(uint32_t n);

	public:
		Array<T>(void);
		Array<T>(uint32_t n);
		Array(const Array& other);
		Array<T>&	operator=(const Array& other);
		T&	operator[](uint32_t i);
		const T	operator[](uint32_t i) const;
		~Array<T>(void);

		uint32_t	size(void) const;
};

template <typename T>
std::ostream&	operator<<(std::ostream& o, Array<T>& obj);
template <typename T>
std::ostream&	operator<<(std::ostream& o, const Array<T>& obj);

# include "Array.tpp"

#endif