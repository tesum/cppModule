#include "Replace.hpp"

Replace::Replace(std::string filename, std::string str1, std::string str2) : _filename(filename), _str1(str1), _str2(str2) {
	if (filename.empty() || str1.empty() || str2.empty()) {
		std::cout << "Error argument. Enter non-empty arguments." << std::endl;
		exit (1);
	}
}

Replace::~Replace() {
	return ;
}

void Replace::reading() {
	std::stringstream	buf;
	std::ifstream		file(_filename, std::ios_base::in);

	if (file.is_open())
		buf << file.rdbuf();
	else {
		std::cout << "File: " << _filename << ": open error" << std::endl;
		exit (1);
	}
	_buf = buf.str();
}

void Replace::replace() {
	Replace::reading();
	size_t i = 0;

	i = _buf.find(_str1, i);
	while (i != std::string::npos) {
		_buf.erase(i, _str1.length());
		_buf.insert(i, _str2);
		i += _str2.length();
		i = _buf.find(_str1, i);
	}
	std::ofstream replaceFile(_filename + ".replace", std::ios_base::out | std::ios_base::trunc);
	if (!replaceFile.is_open()) {
		std::cout << replaceFile << ": error create file" << std::endl;
		exit (1);
	}
	replaceFile << _buf;
}