#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,a,b,flag=0;
        cin >> n;
        int hash[n]={0};
        for(a=0;a<n;a++)
        {
            cin >> b;
            if(b==0)
            flag=1;
            else if(b>0)
            hash[b]=b;
        }
        if(flag==1)
        cout <<"0 ";
        else
        cout <<"-1 ";
        for(a=1;a<n;a++)
        {
            if(hash[a]==0)
            cout<<"-1 ";
            else
            cout << hash[a] << " ";
        }
        cout << endl;
    }
	//code
	return 0;
}
