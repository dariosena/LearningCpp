/*
 * std-array.cpp
 *
 *  Created on: 12/12/2016
 *      Author: dario
 */

#include <iostream>
#include <array>
#include <vector>
#include <numeric>

int main()
{
	std::array<int, 10> a; //constant
	std::iota(a.begin(), a.end(), 1);

	for (int i = 0; i < 10; ++i)
	{
		std::cout << a[i] << std::endl;
	}


	uint32_t range = 10;
	std::vector<uint32_t> set(range);
	std::iota(set.begin(), set.end(), 1);

	for (int i = 0; i < 10; ++i)
	{
		std::cout << set[i] << std::endl;
	}

	return 0;
}


