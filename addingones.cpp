#include <iostream>
using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int a , n , m , b , c;
	    cin >> m >> n;
	    int arr[n] ,  arr1[m+1]={0};
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n;a++)
	    {
	        c=arr[a];
	        for(b=1;b<=m;b++)
	        {
	            if(b>=c)
	            arr1[b]+=1;
	        }
	    }
	    for(a=1;a<=m;a++)
	    {
	        cout << arr1[a] <<" ";
	    }
	    cout << endl;
	}
	return 0;
}
