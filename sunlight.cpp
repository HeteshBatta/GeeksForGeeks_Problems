#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,a,count=0,min;
		cin >> n;
		int arr[n];
		cin >> arr[0];
		min = arr[0];
		for(a=1;a<n;a++)
		{
			cin >> arr[a];
			if(arr[a]>min)
			{
			count++;
			min=arr[a];
		    }
		}
		cout << count << endl;
	}
}
