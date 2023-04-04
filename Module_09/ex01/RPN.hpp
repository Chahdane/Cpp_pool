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
		RPN(const RPN &rhs);
        RPN &operator=(const RPN &rhs);
		~RPN();
};
