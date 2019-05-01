/*
 * Name: Dominic Triano
 * Date: 12/10/2018
 * Language: CPP
 * Compiler: MSVC
 * Desc: Header File for Level Sort
 */
#pragma once
#include <vector>
#include <iostream>
#include <unordered_map>

class Badge
{
private:
	std::unordered_map<std::string, std::vector<std::string>> person;

public:
	Badge();
	~Badge();
	void sort(std::string input);
	void sendToFile();
};
