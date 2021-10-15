#include <iostream>

using namespace std;

// declare functions here
void countDownFrom(int num);
int sumValues(int num);


int main()
{
	countDownFrom(10);		//invoke the function here
	int totalSum = sumValues(10);			//invoke the function
	cout << "The sum is: " << totalSum << endl;

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

int sumValues(int num)
{
	if (num > 1)
	{
		return num + sumValues(num - 1);	//need the -1 to implement the recursion
	}

	return num;
}