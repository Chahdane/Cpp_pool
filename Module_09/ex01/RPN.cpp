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
	int dg , op= 0;
	int i = 1;
	if (!isdigit(expr[0]) || !isdigit(expr[1]))
		return 1;
	while (expr[i])
	{
		dg = 0;
		op = 0;
		for (int x = i; isdigit(expr[x]) || expr[i] == ' '; x++)
			if (isdigit(expr[x]))
				dg++;
		for (int j = i + dg; is_operation(expr[j]) || expr[i] == ' ' ; j++)
		{
			if (is_operation(expr[j]))
				op++;
		}
		if (dg != op)
		{
			std::cout << "UNVALID" <<std::endl;
			return 1;
		}
		i += dg;
		i += op;
	}
	return 0;
}

void RPN::calculate()
{
	std::stack<int> myStack;
	std::string op = expr;
	float result;

	if (op.size() == 1 && isdigit(op[0]))
	{
		std::cout << op << std::endl;
		return ;
	}	
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
		else if (myStack.size() >= 2 && is_operation(op[i]))
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
				result = myStack.top() / result;
			myStack.pop();
			myStack.push(result);
		}
	}
	std::cout << result << std::endl;
}

RPN::~RPN()
{

}

RPN::RPN(const RPN &rhs)
{
	this->expr = rhs.expr;
}

RPN & RPN::operator=(const RPN &rhs) 
{
	this->expr = rhs.expr;
    return (*this); 
}
