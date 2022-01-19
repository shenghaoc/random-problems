#include <iostream>

using namespace std;

int reduce_change(int amount, int *denominations, int denom_len, int denom_index)
{
	int denom;
	if (denom_index < 0)
	{
		denom = 0;
		denom_index = 0;
	}
	else
	{
		denom = denominations[denom_index];
	}
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

	// Start from highest denomination, continue with same and lower denomination
	// to ensure order
	// Greedy approach
	for (int i = denom_len - 1; i >= denom_index; i--)
	{
		cnt += reduce_change(amount, denominations, denom_len, i);
	}
	return cnt;
}

int count_change(int amount, int *denominations, int denom_len)
{
	// How do I avoid duplicates with different order?
	return reduce_change(amount, denominations, denom_len, -1);
}

int main()
{
	int arr[] = {10, 20, 50};
	cout << count_change(400, arr, sizeof(arr) / sizeof(arr[0])) << endl;
	return 0;
}
