#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	long long a, b;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		if (a > b)
			cout << ">" << endl;
		else if (a < b)
			cout << "<" << endl;
		else
			cout << "=" << endl;
	}

	return 0;
}
