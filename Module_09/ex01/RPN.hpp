#include <iostream>
#include <stack>
#include <cctype>
class RPN
{
	private:
		std::string expr;
	public:
		void calculate();
		RPN(std::string expr);
		~RPN();
};
