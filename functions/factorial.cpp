/*
 * factorial.cpp
 *
 *  Created on: 08/01/2017
 *      Author: dario
 */

#include <iostream>

// factorial of val
int fact(int val)
{
	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}


int main()
{
	int j = fact(5);
	std::cout << "5! is " << j << std::endl;
	return 0;
}
