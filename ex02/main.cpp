/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 06:09:20 by etorun            #+#    #+#             */
/*   Updated: 2026/08/09 07:01:18 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
 try{
	 std::cout<<"***Contruction with no parameter***"<<std::endl;
     Array<int> firstArray;
     std::cout << firstArray.size() <<std::endl;
     std::cout << firstArray[0] <<std::endl;
	}
 catch(const std::exception& e)
   	{std::cout << e.what() << std::endl;}
    	
 try{
	std::cout<<"***Construction with an unsigned int n as a parameter***"<<std::endl;
	unsigned int x = 5;
	Array<int> secondArray(x);
	std::cout << "secondArray Size = " <<secondArray.size() <<std::endl;
   		for(unsigned int i = 0;i < x ;i++)
   		{
			std::cout<<secondArray[i]<<std::endl;
		}
	}
   catch(const std::exception& e)
   	{std::cout << e.what() << std::endl;}
	
 try{
	std::cout<<"***Construction by copy***"<<std::endl;
	
	Array<int> sampleArray(2);
	sampleArray[0] = 111;
	sampleArray[1] = 222;
	Array<int> copyArray = sampleArray;
	std::cout << "copyArray Size = " <<copyArray.size() << std::endl;
   	std::cout << "copyArray 0 index = " << copyArray[0] << std::endl;
	std::cout << "copyArray 1 index = " << copyArray[1] << std::endl;
	std::cout<<"***Changing value of copyArray index 0 = 888 ***"<<std::endl;
	copyArray[0]= 888;
	std::cout << "copyArray 0 index = " << copyArray[0] << std::endl;
	std::cout << "sampleArray 0 index = " << sampleArray[0] << std::endl;
	}
   catch(const std::exception& e)
   	{std::cout << e.what() << std::endl;}
 try{
	std::cout<<"***Construction by = operator***"<<std::endl;
	
	Array<int> sampleTwoArray(2);
	sampleTwoArray[0] = 333;
	sampleTwoArray[1] = 444;
	Array<int> equalArray;
	equalArray = sampleTwoArray;
	std::cout << "equalArray Size = " <<equalArray.size() << std::endl;
   	std::cout << "equalArray 0 index = " << equalArray[0] << std::endl;
	std::cout << "equalArray 1 index = " << equalArray[1] << std::endl;
	std::cout<<"***Changing value of sampleTwoArray index 0 = 999 ***"<<std::endl;
	sampleTwoArray[0]= 999;
	std::cout << "sampleTwoArray 0 index = " << sampleTwoArray[0] << std::endl;
	std::cout << "equalArray 0 index = " << equalArray[0] << std::endl;
	}
   catch(const std::exception& e)
   	{std::cout << e.what() << std::endl;}
}