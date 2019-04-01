#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int compare(void const *a , void const *b)
{
    return ( *(int*)a - *(int*)b );
}
int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,b,a,c,d,ans=INT_MAX;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> b;
	        int no = 0;
	        while(b)
	        {
	            d=b%10;
	            no=no*10+d;
	            b/=10;
	        }
	        arr[a]=no;
	    }
	    qsort(arr,n,sizeof(int),compare);
	    for(a=1;a<n;a++)
	    {
	        ans=min(ans,abs(arr[a-1]-arr[a]));
	    }
	    cout << ans << endl;
	}
	return 0;
}
