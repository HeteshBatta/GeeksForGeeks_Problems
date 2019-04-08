#include <bits/stdc++.h>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,no,flag=0,l,r;
	    cin >> n >> no;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    sort(arr,arr+n);
	    for(a=0;a<n-2;a++)
	    {
	        r=n-1;
	        l=a+1;
	        while(l<r)
	        {
	            //cout << arr[a] << arr[r] << arr[l] <<"-" << endl; 
	            if((arr[a]+arr[r]+arr[l])==no)
	            {
	                flag=1;
	                break;
	            }
	            else if(arr[a]+arr[r]+arr[l]>no)
	            {
	                r--;
	            }
	            else
	            {
	                l++;
	            }
	        }
	    }
	    if(flag==1)
	    cout <<"1" << endl;
	    else
	    cout <<"0" << endl;
	}
	return 0;
}
