#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <map>

template<typename T>
typename T::iterator easyfind(T &input, int n) {
	typename T::iterator i = std::find(input.begin(), input.end(), n);
	if (i == input.end())
		throw std::runtime_error("Not found");
	return i;
}

template<typename KEY, typename VALUE>
typename std::map<KEY, VALUE>::iterator easyfind(std::map<KEY, VALUE> &input, int n) {
	typename std::map<KEY, VALUE>::iterator i = input.find(n);
	if (i == input.end())
		throw std::runtime_error("Not found");
	return i;
}

#endif