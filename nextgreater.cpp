#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,n;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n;a++)
	    {
	        int max=-9999;
	        for(b=a+1;b<n;b++)
	        {
	            if(arr[b]>max)
	            max=arr[b];
	        }
	        arr[a]=max;
	    }
	    arr[n-1]=-1;
	    for(a=0;a<n;a++)
	    {
	        cout << arr[a] <<" ";
	    }
	    cout << endl;
	}
	return 0;
}
