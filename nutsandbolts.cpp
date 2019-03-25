#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    char ch; 
	    int n,a,flag,b,c,z=0;
	    cin >> n;
	    char arr[n], arr1[n] , arr3[n];
	    char arr2[]={'!','#','$','%','&','*','@','^','~'};
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n;a++)
	    {
	        cin >> arr1[a];
	    }
	    for(a=0;a<9;a++)
	    {
	        ch = arr2[a];
	        flag=0;
	        for(b=0;b<n;b++)
	        {
	            if(ch==arr[b])
	            {
	                flag=1;
	            }
	        }
	        if(flag==1)
	        {
	            for(c=0;c<n;c++)
	            {
	                if(ch==arr1[c])
	                flag=2;
	            }
	        }
	        if(flag==2)
	        {
	            arr3[z]=arr2[a];
	            z++;
	        }
	        for(a=0;a<z;a++)
	        {
	            cout << arr3[a] <<" ";
	        }
	        cout << endl;
	        for(a=0;a<z;a++)
	        {
	            cout << arr3[a] <<" ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
