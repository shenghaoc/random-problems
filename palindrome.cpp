#include <iostream>

using namespace std;

bool is_palindrome(string input)
{
	for (int i = 0; i < input.length() / 2; i++)
	{
		if (input[i] != input[input.length() - 1 - i])
		{
			return false;
		}
	}
	return true;
}

size_t longest_palindrome(string input)
{
	string longest = "";
	for (int i = 0; i < input.length(); i++)
	{
		for (int j = 1; j <= input.length() - i; j++)
		{
			string test_str = input.substr(i, j);
			if (is_palindrome(test_str))
			{
				if (test_str.length() > longest.length())
				{
					longest = test_str;
				}
			}
		}
	}
	return longest.length();
}

int main()
{
	cout << (is_palindrome("foooooo") ? "True" : "False") << endl;
	cout << longest_palindrome("foobar") << endl;
	return 0;
}
