#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,c1=0,c0=0,c2=0;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n;a++)
	    {
	        if(arr[a]==0)
	        c0++;
	        if(arr[a]==1)
	        c1++;
	        if(arr[a]==2)
	        c2++;
	    }
	    for(a=0;a<c0;a++)
	    {
	        cout <<"0 ";
	    }
	    for(a=0;a<c1;a++)
	    {
	        cout <<"1 ";
	    }
	    for(a=0;a<c2;a++)
	    {
	        cout <<"2 ";
	    }
	    cout << endl;
	}
	return 0;
}
