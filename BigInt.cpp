#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BigInt
{
private:
	vector<char> intStorage;

public:
	BigInt()
	{
		intStorage.push_back('0');
	}

	BigInt(int x)
	{
		string number = to_string(x);
		for (int i = 0; i < number.length();i++)
		{
			intStorage.push_back(number.at(i));
		}
	}

	BigInt(string s)
	{
		for (int i = 0; i < s.length();i++)
		{
			intStorage.push_back(s.at(i));
		}
	}

	BigInt operator+(BigInt x)
	{
		//logic for BigInt addition goes here
	}

	BigInt operator+(int x)
	{
		
	}

	friend ostream & operator<<(ostream & out, const BigInt & n)
	{
		string number;
		for (int i = n.intStorage.size()-1; i >= 0; i--)//go in reverse
		{
			if (n.intStorage.size() > 3 && i > 0 && i < (n.intStorage.size() - 2))
			{
				if (i % 3 == 2)
				{
					number += ",";
				}
			}
			number += n.intStorage.at(i);
		}
		out << number;
		return out;
	}
};

int main()
{
	BigInt test("20034264684891496868941688497487968465165496796841564987");
	cout << test << endl;
	system("pause");
	return 0;
}