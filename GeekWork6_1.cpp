#include <iostream>
using namespace std;

int main()
{
	int Array[3][3]{1,9,2,5,7,6,4,3,8};
	int buffer;
	bool condition = false;
	cout << "Original: ";
	for (int i = 0; i < 9; i++)
	{
		cout << Array[0][i] << " ";
	}

	do
	{
		for (int i = 0; i < 8; i++)
		{
			if (Array[0][i] > Array[0][i + 1])
			{
				buffer = Array[0][i];
				Array[0][i] = Array[0][i + 1];
				Array[0][i + 1] = buffer;
				condition = false;
				break;
			}
			else
			{
				condition = true;
			}
		}

		

	} while (condition != true);

	cout << endl;
	cout << "Processed: ";
	for (int i = 0; i < 9; i++)
	{
		cout << Array[0][i] << " ";
	}
	return 0;
}	