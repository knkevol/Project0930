#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int Input = 0;
	int Sum = 0;

	cin >> Input;
	
	vector<int> XorNum(Input);
	
	for (int i = 0; i < Input; i++)
	{
		int Num = 0;
		if (!(cin >> Num))
		{
			return 1;
		}			
	
		int Check = 1;
		while (Check <= Num)
		{
			if (Check > INT_MAX / 2) // ValueType Change
			{
				Check = Num + 1;
				break;
			}
			Check = Check * 2; // Check << 1  faster than before
		}
	
		XorNum[i] = Check;
	
		Sum ^= XorNum[i];
	}
	
	cout << Sum << endl;

	BitOperater();
	
	return 0;
}

int BitOperater()
{
	int N = 0;
	unsigned long long X = 0;
	unsigned long long Result = 0;

	cin >> N;
	for (int i = 0; i < N; ++i)
	{
		cin >> X;
		unsigned long long NPOT = 2;
		for (int j = 1; j < 64; ++j)
		{
			if (NPOT >= X)
			{
				if (i == 0)
				{
					Result = NPOT;
				}
				else
				{
					Result = Result ^ NPOT;
				}
				break;
			}

			NPOT = NPOT << 1;
		}
	}

	cout << Result << endl;
}