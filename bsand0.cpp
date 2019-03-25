#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,right,mid,left,flag=0;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    left=0;
	    right=n;
	    while(left<=right)
	    {
	        mid=(left+right)/2;
	        if(arr[mid]==0 && arr[mid-1]==1)
	        {
	            cout << n - mid << endl;
	            flag=1;
	            break;
	        }
	        else if(arr[mid]==1)
	        {
	            left=mid+1;
	        }
	        else if(arr[mid]==0)
	        {
	            right=mid;
	        }
	    }
	    	if(flag==0)
	        cout << "0" << endl;
	}
	return 0;
}
