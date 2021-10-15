#include <iostream>

using namespace std;

// declare functions here
void countDownFrom(int num);


int main()
{
	countDownFrom(10);		//invoke the function here

	return 0;
}

//place functions here
void countDownFrom(int num)
{
	if (num >= 0)
	{
		cout << num << endl;
		countDownFrom(num - 1);		//recursively decrement the number in the function
	}
}