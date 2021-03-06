
#include <iostream>
#include "Partition.h"
#include <string>
#include <unordered_map>

int main() {
	// Initialize an unordered_map through initializer_list

	// Declare an iterator to unordered_map
	std::unordered_map<char,std::tuple<std::string,int>>::iterator it;

	// Find if an element with key "First" exists or not.
	// find() returns an iterator

	it = dicco_notes.find('q');

	// Check if iterator points to end of map
	if (it != dicco_notes.end())
	{
		std::cout << "Element Found - ";
		std::cout << it->first << "::"<< std::get<0>(it->second) << " "<<std::get<1>(it->second) << std::endl;
	}
	else
	{
		std::cout << "Element Not Found" << std::endl;
	}

	return 0;
}
