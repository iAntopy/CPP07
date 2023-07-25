/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 03:40:08 by marvin            #+#    #+#             */
/*   Updated: 2023/07/25 03:40:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template <typename T> 
class   Array;

template <typename T>
Array<T>::Array<T>(void): _size(0), _data(NULL)
{
    std::cout << "Array default constructor" std::endl;
}

template <typename T>
Array<T>::Array<T>(uint32_t n): _size(n), _data(NULL)
{
    std::cout << "Array constructor with param" std::endl;
    this->_data = new T[_size];
}

//Array::Array(const Array& other): _size(other.size())

template <typename T>
Array<T>::~Array<T>(void)
{
    if (this->_data)
        delete[] this->_data;
}

template <typename T>
uint32_t    Array<T>::size(void) const {return (this->_size);}

#endif