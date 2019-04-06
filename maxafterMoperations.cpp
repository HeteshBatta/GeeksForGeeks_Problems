#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m,a,b,c,d,k,max=-9999;
	    cin >> n >> m;
	    int arr[n]={0};
	    for(c=0;c<m;c++)
	    {
	        cin >> a >> b >> k;
	        for(d=a;d<=b;d++)
	        {
	            arr[d]+=k;
	        }
	    }
	    for(d=0;d<n;d++)
	    {
	        if(max<arr[d])
	        max=arr[d];
	    }
	    cout << max << endl;
	}
	return 0;
}
