#include<bits/stdc++.h>
using namespace std;

const double PI = 3.141593;
int main()
{
	int T;
	cin >> T;
	if (T == 1)
	{//T1
		cout << "I love Luogu!" << endl;
	}
	else if (T == 2)
	{//T2
		cout << "6" << " " << "4" << endl;
	}
	else if (T == 3)
	{//T3
		cout << "3" << endl;
		cout << "12" << endl;
		cout << "2" << endl;
	}
	else if (T == 4)
	{//T4
		cout << "166.667" << endl;
	}
	else if (T == 5)
	{//T5
		cout << "15" << endl;
	}
	else if (T == 6)
	{//T6
		cout << sqrt(6 * 6 + 9 * 9) << endl;
	}
	else if (T == 7)
	{//T7
		cout << "110" << endl << "90" << endl << "0" << endl;
	}
	else if (T == 8)
	{//T8
		int r = 5;
		//PI=3.141593
		double c8 = 2 * PI * r;
		double s8 = PI * r * r;
		double v8 = 4.0 / 3 * PI * r * r * r;
		cout << c8 << endl << s8 << endl << v8 << endl;
	}
	else if (T == 9)
	{//T9
		cout << "22" << endl;
	}
	else if (T == 10)
	{//T10
		cout << "9" << endl;
	}
	else if (T == 11)
	{//T11
		cout << 1.0 * 100 / 3;
	}
	else if (T == 12)
	{//T12
		cout << "13" << endl << "R" << endl;
	}
	else if (T == 13)
	{//T13
		//PI=3.141593
		//cout << (int)(pow(4 / 3 * PI * (4 * 4 * 4 + 10 * 10 * 10), 1.0 * 1 / 3));
		cout << "16" << endl;
	}
	else if (T == 14)
	{//T14
		cout << 50 << endl;
	}
	return 0;
}
