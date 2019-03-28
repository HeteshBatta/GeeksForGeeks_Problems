using namespace std;

int compare(const void *a , const void *b)
{
    return ( *(int *)a - *(int *)b );
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int a,b,c,temp,n;
	    cin >> n;
	    int arr[n],arr1[n],hash[1001];
	    for(a=0;a<n;a++)
	    {
	        cin >> arr[a];
	        arr1[a]=arr[a];
	    }
        qsort(arr,n,sizeof(int),compare);
        for(a=0;a<n;a++)
        {
            hash[arr[a]]=a;
        }
        for(a=0;a<n;a++)
        {
            cout << hash[arr1[a]] <<" ";
        }
	    cout << endl;
	}
	return 0;
}
