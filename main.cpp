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
			if (Check > INT_MAX / 2)
			{
				Check = Num + 1;
				break;
			}
			Check = Check * 2;
		}

		XorNum[i] = Check;
	}


	for (int k = 0; k < Input; k++)
	{
		Sum ^= XorNum[k];
	}
	
	cout << Sum << endl;

	
	return 0;
}