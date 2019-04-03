#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int max=0,a,b,n,ans=0;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n;a++)
	    {
	        for(b=a+1;b<n;b++)
	        {
	            ans = arr[a] & arr[b];
	           // cout << ans <<"&" << endl;
	            if(ans>max)
	            max=ans;
	        }
	    }
	    cout << max << endl;
	}
	return 0;
}
