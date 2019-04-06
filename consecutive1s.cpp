#include <bits/stdc++.h>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,i;
	    cin >> n;
	    int arr[n] , brr[n];
	    arr[0]=1;
	    brr[0]=1;
	    for(i=1;i<n;i++)
	    {
	        arr[i]=(arr[i-1]+brr[i-1])%long(pow(10,9)+7);
	        brr[i]=arr[i-1];
	    }
	    cout << (arr[n-1] + brr[n-1])%long(pow(10,9)+7) << endl;
	}
	return 0;
}
