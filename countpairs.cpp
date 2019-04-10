#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int a,j,i,count=0,n;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(i*arr[i] > j*arr[j])
	            count++;
	        }
	    }
	    cout << count  << endl;
	}
	return 0;
}
