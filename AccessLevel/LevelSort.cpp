/*
 * Name: Dominic Triano
 * Date: 12/10/2018
 * Language: CPP
 * Compiler: MSVC
 * Desc: Sorting access levels in csv files, have tried sorting using excel files but cannot implement POI for JAVA 
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <cassert>
#include <sstream>
#include "Badge.h"

//using namespace std;

int main(void)
{
	Badge person;
	//std::ifstream file;
	std::string fileName;
	std::cout << "********************************************************************************\n"
		<< "Disclaimers:\n"
		<< "1.) Make sure all of the names for an individual are referenced as the same \n"
		<< "    name in the whole document, or else their access levels will be split up\n"
		<< "2.) Make sure to properly format file before converting to CSV:\n"
		<< "    ex)\n"
		<< "      Name/ID | Levels\n"
		<< "      --------+--------\n"
		<< "      Charles | M103\n"
		<< "      --------+--------\n"
		<< "      Charles | M104\n"
		<< "      --------+--------\n"
		<< "      Jason   | C105\n"
		<< "********************************************************************************\n";
	std::cout << "Enter CSV File Name:\n";
	std::cin >> fileName;
	//file.open(fileName.data());
	//assert(file.is_open());
	person.sort(fileName);
	person.sendToFile();
	std::cout << "File Formatted!";
}