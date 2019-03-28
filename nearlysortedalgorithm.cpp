using namespace std;

int main() 
{
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,key,j,k;
	    cin >> n;
	    cin >> k;
	    int arr[n];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	    }
	    for(a=1;a<n;a++)
	    {
	        key = arr[a];
	        j=a-1;
	        while(j>=0 && arr[j]>key)
	        {
	            arr[j+1]=arr[j];
	            j--;
	        }
	        arr[j+1]=key;
	    }
	    for(a=0;a<n;a++)
	    {
	        cout << arr[a] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
