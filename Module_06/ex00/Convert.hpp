#include <iostream>
#include <exception>

class Convert
{
	private:
		std::string data; 
	public:
		Convert(std::string data);
		Convert(const Convert &rhs);
		Convert &operator=(const Convert &rhs);
		void toInt();
		void toChar();
		void toFloat();
		void toDouble();
		void convert();
		~Convert();
};

