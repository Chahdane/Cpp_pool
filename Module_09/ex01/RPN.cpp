#include "RPN.hpp"

RPN::RPN(std::string expr)
{
	//std::cout << expr << "\n";
	this->expr = expr;
}

int is_operation(char c)
{
	if (c == '+' || c == '-' ||c == '*' ||c == '/')
		return 1;
	return 0;
}

int check_errors(std::string expr)
{
	if (!std::isdigit(expr[0]))
			return (1);	
	for (int i = 1; expr[i]; i+=2)
	{
		if (!std::isdigit(expr[i]) && !is_operation(expr[i + 1]) && expr[i + 2] != ' ')
			return (1);	
	}
	return 0;
}

void RPN::calculate()
{
	std::stack<int> myStack;
	std::string op = expr;
	int result;
	
	if (check_errors(op))
		return ;
	for (int i = 0; op[i]; i++)
	{
		if (op[i] == ' ')
			continue;
		if (std::isdigit(op[i]))
		{
			int to_push = static_cast<int>(op[i]) - 48;
			myStack.push(to_push);

		}
		else if (myStack.size() >= 2)
		{
			result = myStack.top();
			myStack.pop();
			if (op[i] == '+')
				result += myStack.top();
			if (op[i] == '-')
				result = myStack.top() - result;
			if (op[i] == '*')
				result *= myStack.top();
			if (op[i] == '/')
				result /= myStack.top();
			myStack.pop();
			myStack.push(result);
		}
	}

	std::cout << result << "\n";
}

RPN::~RPN()
{

}