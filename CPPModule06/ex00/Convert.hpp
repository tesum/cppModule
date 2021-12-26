#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <iomanip>

class Convert
{
	private:
		double _num;
	public:
		Convert(const char *input);
		Convert(const Convert &raw);
		Convert &operator=(const Convert &raw);
		~Convert();

		void toChar();
		void toInt();
		void toDouble();
		void toFloat();

		class ConvertException : public std::exception {
			private:
				const char *_error;
			public:
				ConvertException(const char *str);
				const char *what() const throw();
				virtual ~ConvertException() throw();
		};
};

#endif