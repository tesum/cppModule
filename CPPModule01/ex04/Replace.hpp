#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

class Replace
{
	private:
		std::string _filename;
		std::string _str1;
		std::string _str2;
		std::string _buf;
	public:
		Replace(std::string filename, std::string str1, std::string str2);
		~Replace();
		void reading();
		void replace();
};

#endif