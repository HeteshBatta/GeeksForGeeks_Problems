using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,b,c,d=0,count;
	    cin >> n;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=0;a<n;a++)
	    {
	        for(b=0;b<n;b++)
	        {
	            if(a!=b)
	            {
	                c = arr[a]^arr[b];
                    count = __builtin_popcount(c);
                    d+=count;
	            }
	        }
	    }
	    cout << d << endl;
	}
	return 0;
}
