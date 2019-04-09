#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k,a,b,count=0;
	    cin >> n >> k;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n;a++)
	    {
	        for(b=0;b<n;b++)
	        {
	            if(arr[a]%arr[b]==k)
	            count++;
	        }
	    }
	    cout << count<< endl;
	}
	return 0;
}
