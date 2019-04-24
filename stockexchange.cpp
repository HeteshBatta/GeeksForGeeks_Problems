#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n , a , res[2] , flag=0;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    res[0]=0;
	    res[1]=-1;
	    for(a=0;a<n;a++)
	    {
	        if(arr[a]>arr[a+1] || a==n-1)
	        {
	            res[1]=a;
	            if(res[0]!=res[1])
	            {
	                flag=1;
	                cout << "(" << res[0] <<" "<< res[1] <<")" <<" ";
	            }
	            res[0]=a+1;
	        }
	        else if(arr[a]<arr[a+1] && res[1]!=-1)
	        {
	            res[0]=a;
	            res[1]=-1;
	        }
	    }
	    if(flag==0)
	    cout << "No Profit";
	    cout << endl;
	}
	return 0;
}
