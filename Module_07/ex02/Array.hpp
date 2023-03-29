template <typename T> class Array
{
	private:
		T *arr;
		unsigned int arr_size;
	public:
		Array()
		{
			std::cout << "Constructor called for Array" << std::endl;
			arr = new T[0];
		};
		Array(unsigned int n)
		{
			std::cout << "Constructor called for Array" << std::endl;
			arr_size = n;
			arr = new T[n];
		}
		Array (const Array &rhs)
		{
			std::cout << "Copy Constructor called for Array" << std::endl;
			this->arr_size = rhs.arr_size;
			this->arr = new T[rhs.arr_size];
			for (unsigned int i = 0 ; i < rhs.arr_size; i++)
				this->arr[i] = rhs.arr[i];
		}
		Array & operator=(const Array &rhs)
		{
			std::cout << "Assignment Operator called for Array" << std::endl;
			this->arr_size = rhs.arr_size;
			this->arr = new T[rhs.arr_size];
			for (unsigned int i = 0 ; i < rhs.arr_size; i++)
				this->arr[i] = rhs.arr[i];
			return *this;
		}
		unsigned int size()
		{
			return this->arr_size;
		}
	 	T& operator[](unsigned int i)
		{
			if (i < 0 || i > this->arr_size)
				throw error();
			return (this->arr[i]);
		}
		class error : public std::exception
		{
			public :
                const char * what() const throw()
                {
                    return "ERROR: index is out of bounds";
                };
		};
		~Array()
		{
			delete[] this->arr;
			std::cout << "Destructor called for Array" << std::endl;
		}
};