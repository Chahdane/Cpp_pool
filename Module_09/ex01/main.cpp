#include <iostream>
#include <stack>
#include <cctype>



int main(int ac, char **av) {


    std::stack<int> myStack;
    

	char *op = av[1];
	int tmp;
	for (int i = 0; op[i]; i++)
	{
		if (op[i] == ' ')
			continue;
		if (std::isdigit(op[i]))
		{
			int to_push = static_cast<int>(av[1][i]) - 48;
			myStack.push(to_push);
		}
		else
		{
			tmp = myStack.top();
			myStack.pop();
			if (op[i] == '+')
				tmp += myStack.top();
			if (op[i] == '-')
				tmp = myStack.top() - tmp;
			if (op[i] == '*')
				tmp *= myStack.top();
			if (op[i] == '/')
				tmp /= myStack.top();
			myStack.pop();
			myStack.push(tmp);
		}
	}

	 std::cout << "res " << myStack.top() << "\n";
    // while (!myStack.empty()) {
    //     std::cout << myStack.top() << " ";
    //     myStack.pop();
    // }
    // std::cout << std::endl;


    
    return 0;
}





