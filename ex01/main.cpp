/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:08:39 by etorun            #+#    #+#             */
/*   Updated: 2026/08/06 07:12:52 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


void toDouble(int& variable)
{
	variable = variable * 2;	
}

void printStr(const std::string& variable)
{
	std::cout << "Variable: " << variable << std::endl;
}

template <typename T>
void print(T& value)
{
	std::cout << value << std::endl;
}
int main(void)
{
	std::string strArray[3];
	strArray[0] = "Zero";
	strArray[1] = "One";
	strArray[2] = "Two";
	int intArray[3] = {12, 3, 43};
	::iter(strArray, 3, printStr);
	::iter(intArray, 3, toDouble);
	::iter(intArray, 3, print<int>);
}