/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 03:40:08 by marvin            #+#    #+#             */
/*   Updated: 2023/07/25 18:54:19 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

//template <typename T> 
//class   Array;

template <typename T>
Array<T>::Array(void): _size(0), _data(NULL)
{
	std::cout << "Array default constructor" << std::endl;
}

template <typename T>
Array<T>::Array(uint32_t n): _size(n), _data(NULL)
{
	std::cout << "Array constructor with param" << std::endl;
	_data = new T[_size];
	std::memset(_data, 0, _size * sizeof(T));
}

template <typename T>
T&	Array<T>::operator[](uint32_t i)
{
	if (i >= _size)
		throw std::out_of_range("index out of bounds");
	return (_data[i]);
}

template <typename T>
const T	Array<T>::operator[](uint32_t i) const
{
	if (i >= _size)
		throw std::out_of_range("index out of bounds");
	return (_data[i]);
}


template <typename T>
Array<T>::Array(const Array& other): _size(other.size()), _data(NULL)
{
	std::cout << "Array copy constructor" << std::endl;
	this->_data = new T[_size];
	for (int i=0; i < _size; ++i)
		_data[i] = other[i];
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& other)
{
    std::cout << "Array copy assignment operator" << std::endl;
	if (other.size() != _size)
	{
		if (_data)
			delete[] _data;
		_size = other.size();
		_data = new T[other.size()];
		std::memset(_data, 0, _size * sizeof(T));
	}
	for (int i=0; i < _size; ++i)
		_data[i] = other[i];
		
	return (*this);
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Array destructor" << std::endl;
	if (this->_data)
		delete[] this->_data;
}

template <typename T>
uint32_t    Array<T>::size(void) const {return (this->_size);}

template <typename T>
void	Array<T>::setSize(uint32_t n) {_size = n;}

template <typename T>
std::ostream&	operator<<(std::ostream& o, const Array<T>& obj)
{
	const uint32_t	n = obj.size();

	std::cout << "Array([ ";
	for (int i=0; i < (n - 1); ++i)
		std::cout << obj[i] << ", ";
	std::cout << obj[n - 1] << " ])";
	return (o);
}

template <typename T>
std::ostream&	operator<<(std::ostream& o, Array<T>& obj)
{
	const uint32_t	n = obj.size();

	std::cout << "Array([ ";
	for (int i=0; i < (n - 1); ++i)
		std::cout << obj[i] << ", ";
	std::cout << obj[n - 1] << " ])";
	return (o);
}


#endif