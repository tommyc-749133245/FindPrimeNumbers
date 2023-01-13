#include <iostream>
using namespace std;

//function for checking prime
void Prime(int& n)
{
	int count = 0;
	bool* answer = new bool[n];
	int* input = new int[n];
	//initialize array
	for (int i = 0; i < n; i++)
	{
		answer[i] = true;
		input[i] = i;
	}

	//check for prime
	for (int i = 2; i < n; i++)
	{
		for (int j = 2; j < 10; j++)
		{
			// where 2 is prime
			if (input[i] == 2)
			{
				answer[i] = true;
				break;
			}
			//where 3 is prime
			else if (input[i] == 3)
			{
				answer[i] = true;
				break;
			}
			//where 5 is prime
			else if (input[i] == 5)
			{
				answer[i] = true;
				break;
			}
			//where 7 is prime
			else if (input[i] == 7)
			{
				answer[i] = true;
				break;
			}
			//check for other prime
			else if (input[i] % j == 0)
			{
				answer[i] = false;
			}
		}
	}

	//print each prime in the range
	cout << "Prime numbers: ";
	for (int i = 2; i < n; i++)
	{
		if (answer[i])
		{
			count++;
			std::cout << input[i] << " ";
		}
	}
	cout << endl;

	//print numbers of prime
	cout << count << " primes found." << endl;
	delete[] answer;
	delete[] input;
}
int main()
{
	int n;
	cout << "Enter the value of n:";
	cin >> n;

	//call function prime
	Prime(n);
	system("pause");
	return 0;
}