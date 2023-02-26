#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{               int sz;
                cin>>sz;
//	int first[] = { 5, 10, 15, 20, 25 };
//	int second[] = { 50, 40, 30, 20, 10 };
//	int n = sizeof(first) / sizeof(first[0]);

	int first[sz];
	for(int i=0; i<sz;i++)
                {
                                cin>>first[i];
                }
                int sz1;
                cin>>sz1;
//                cout<<sz1;
	int second[sz1];
	for(int i=0; i<sz1;i++)
                {
                                cin>>second[i];
                }

	// Print first array
	cout << "First array contains :";
	for (int i = 0; i <sz; i++)
		cout << " " << first[i];
	cout << "\n";

	// Print second array
	cout << "Second array contains :";
	for (int i = 0; i < sz1; i++)
		cout << " " << second[i];
	cout << "\n\n";

	vector<int> v(10);
	vector<int>::iterator it, st;

	sort(first, first + sz);
	sort(second, second +sz1);

	// Using default function
	it = set_union(first, first + sz, second, second + sz1, v.begin());

	cout << "The union has " << (it - v.begin())<< " elements:\n";
	for (st = v.begin(); st != it; ++st)
		cout << ' ' << *st;
	cout << '\n';

	return 0;
}

