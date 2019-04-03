using namespace std;

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b,count,k;
        cin >> n;
        int arr[n];
        for(a=0;a<n;a++)
        {
            cin >> arr[a];
        }
        cin >> k;
        for(a=0;a<n-k+1;a++)
        {
            count=0;
            for(b=a;b<a+k;b++)
            {
                if(arr[b]<0)
                {
                    cout << arr[b] << " ";
                    break;
                }
                else
                count++;
            }
            if(count==k)
            cout <<"0 ";
        }
        cout << endl;
    }
	//code
	return 0;
}
