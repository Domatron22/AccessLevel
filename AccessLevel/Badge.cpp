/*
 * Name: Dominic Triano
 * Date: 12/10/2018
 * Language: CPP
 * Compiler: MSVC
 * Desc: Implementation File for Badge.h
 */

#include <iostream>
#include <string>
#include <fstream>
#include <cassert>
#include <sstream>
#include "Badge.h"

Badge::Badge()
{

}

Badge::~Badge()
{

}

void Badge::sort(std::string input)
{
	std::string line;
	std::ifstream file;
	std::string name2;
	int count = 0;
	bool placed = false;
	bool found = false;
	file.open(input.data());
	assert(file.is_open());
	getline(file, line);//throw away top line of file
	while (getline(file, line))//get line of file
	{
		std::stringstream stream(line); //streaming over a line from file
		while (!stream.eof())
		{
			std::string word;
			stream >> word;// get next word in line
			size_t comma; //will be assigned the place where the comma is located 
			std::string name = line.substr(0, comma = line.find(','));//from the begining to the comma is the name
			std::string level = line.substr(comma + 1, line.length());//after the comma is the level
			person[name].push_back(level);//automatically sees if the name is already there and if it is it adds to the vector of strings and if it isnt it creates a new entry
			count++;
		}
	}
	std::cout << "\n" << count << " Entries Proccesed.\n";
}

void Badge::sendToFile()
{

	int j = 1;
	std::ofstream myfile;
	myfile.open("UpdatedBadges.csv"); // opens a new file
	//system("PAUSE");
	for (auto element : person)//auto creates a pair of string and a vector of strings
	{
		myfile << element.first << ","; // first element is the name (string)
		for (auto level : element.second)
		{
			myfile << level << ",";//second element is the levels (vector of strings)
		}
		myfile << "\n";
	}
	myfile.close();
}