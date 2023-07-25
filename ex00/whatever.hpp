/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iamongeo <iamongeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 22:38:34 by iamongeo          #+#    #+#             */
/*   Updated: 2023/07/24 22:57:40 by iamongeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void	swap(T& a, T& b)
{
	T	temp = a;

	a = b;
	b = temp;
}

template <typename T>
T	min(T& a, T& b)
{
	return ((a < b) ? a : b);
}

template <typename T>
T	max(T& a, T& b)
{
	return ((a > b) ? a : b);
}

#endif