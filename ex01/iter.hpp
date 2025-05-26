
#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <iomanip>
# include <string>

template <typename T>
void	iter(T *arrayPtr, size_t len, void(*function)(T &))
{
	if (!arrayPtr || !function)
		return;
	size_t i = 0;
	while (i < len)
	{
		function(arrayPtr[i]);
		i++;
	}
}

template <typename T>
void	iter(const T *arrayPtr, size_t len, void(*function)(const T &))
{
	if (!arrayPtr || !function)
		return;
	size_t i = 0;
	while (i < len)
	{
		function(arrayPtr[i]);
		i++;
	}
}

#endif