#include <iostream>

using namespace std;

int reduce_change(int amount, int denominations[], int denom)
{
	if (amount == denom)
	{
		return 1;
	}

	if (amount < denom)
	{
		return 0;
	}

	amount -= denom;

	int cnt = 0;

	for (int i = 0; i < sizeof(denominations) / sizeof(denominations[0]); i++)
	{
		cnt += reduce_change(amount, denominations, denominations[i]);
	}
	return cnt;
}

int count_change(int amount, int denominations[])
{
	// How do I avoid duplicates with different order?
	return reduce_change(amount, denominations, 0);
}

int main()
{
	int arr[] = {10, 20};
	cout << count_change(50, arr) << endl;
	return 0;
}
