//
// Created by Lowell Zima on 1/23/23.
//

#include "MutantStack.h"
#include <stack>
#include <list>

int main () {

	// TEST STACK
	std::cout<< std::endl;
	std::cout << BOLD_Y << " STACK " << RESET << std::endl;

	MutantStack< int > mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << "stack.push : 5, 17 -> Stack size = " << mstack.size() << std::endl;

	std::cout << "On top of the stack with .top(): = "<< mstack.top() << std::endl;
	std::cout << "Value on top with stack.top()  " << mstack.top() << " was removed" << std::endl;

	mstack.pop();
	std::cout << "Stack size = " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "stack.push : 3, 5, 737, 0 -> Stack size = " << mstack.size() << std::endl;

	MutantStack< int >::iterator it = mstack.begin();
	MutantStack< int >::iterator ite = mstack.end();
	++it;
	--it;

	while (it != ite)
	{
		std::cout << "*it Stack = " << *it << std::endl;
		++it;
	}
	std::stack< int > s(mstack);


	// TEST LIST
	std::cout<< std::endl;
	std::cout << BOLD_Y << " LIST " << RESET << std::endl;

	std::list<int> testList;

	testList.push_front(5);
	testList.push_front(17);
	std::cout << "Push Front : 5, 17 - > Stack size = " << testList.size() << std::endl;

	std::cout << "On top of the list with .front(): "<< testList.front() << std::endl;
	std::cout << "Value on top with .front() " << testList.front() << " was removed" << std::endl;

	testList.pop_front();
	std::cout << "Stack size = " << testList.size() << std::endl;

	testList.push_back(3);
	testList.push_back(5);
	testList.push_back(737);
	testList.push_back(0);

	std::cout << "list.push_back : 3, 5, 737, 0 -> Stack size = " << testList.size() << std::endl;

	for (std::list<int>::iterator it = testList.begin(); it != testList.end(); it++)
		std::cout << "*it List = "<<*it << std::endl;

	std::list<int> copiedList(testList);

	return 0;
}
