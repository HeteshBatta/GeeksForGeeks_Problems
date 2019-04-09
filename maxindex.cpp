#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int a,e,n,ans=0;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n-1;a++)
	    {
	        e=n-1;
	        while(arr[e]<arr[a] && a<e && (e-a) > ans)
	        {
	            e--;
	        }
	        if(arr[e]>=arr[a] && (e-a) > ans)
	        ans=e-a;
	    }
	    cout << ans << endl;
	}
	return 0;
}
