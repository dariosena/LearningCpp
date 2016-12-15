/*
 * merging.cpp
 *
 *  Created on: 15/12/2016
 *      Author: dario
 */
#include <iostream>
#include <map>

void printIt(std::map<int,int> m) {
	for(std::map<int,int>::iterator it=m.begin();it!=m.end();++it)
		std::cout << it->first<<":"<<it->second<<" ";
	std::cout << "\n";
}

int main() {
	std::map<int,int> foo, bar;
	//foo[1] = 11; foo[2] = 12; foo[3] = 13;
	bar[2] = 20; bar[3] = 30; bar[4] = 40;
	printIt(foo);
	printIt(bar);
	foo.insert(bar.begin(),bar.end());
	printIt(foo);
	return 0;
}



