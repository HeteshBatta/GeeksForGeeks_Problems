#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,b,count=0,sum=0;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n;a++)
	    {
	        sum=arr[a];
	        if(sum%2==0)
	            count++;
	        for(b=a+1;b<n;b++)
	        {
	            sum+=arr[b];
	            if(sum%2==0)
	            count++;
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
