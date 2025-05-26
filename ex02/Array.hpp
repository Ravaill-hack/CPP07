
#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T> 
class Array
{
	public:
		Array() : _array(NULL), _size(0){}
		Array(unsigned int n) : _array(new T[n]), _size(n)
		{
			unsigned int i = 0;
			while (i < _size)
			{
				_array[i] = 0;
				i++;
			}
		}

		~Array()
		{
			if (_array)
				delete[] _array;
		}

		Array(const Array & toCopy)
		{
			if (this != &toCopy)
			{
				*this = toCopy;
			}
		}

		Array & operator=(const Array & other)
		{
			unsigned int	i = 0;
			this->_size = other._size;
			if (this != &other)
			{
				if (this->_array)
					delete[] this->_array;
				this->_array = new T[this->_size];
				while (i < _size)
				{
					this->_array[i] = other._array[i];
					i++;
				}
			}
			return (*this);
		}

		class OutOfBoundsException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return ("Error: index out of bounds");
				}
		};

		T & operator[](size_t ind)
		{
			try
			{
				if (ind >= this->_size)
					throw OutOfBoundsException();
			}
			catch(const OutOfBoundsException& e)
			{
				std::cerr << e.what() << std::endl;
			}
			return (this->_array[ind]);
		}

		size_t	size(void) const
		{
			return (_size);
		}

	private:
		T*				_array;
		unsigned int	_size;
};

#endif