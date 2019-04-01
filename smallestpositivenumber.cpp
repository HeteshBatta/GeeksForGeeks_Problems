#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,hash[100000]={0},a,b;
        cin >> n;
        for(a=0;a<n;a++)
        {
            cin >> b;
            if(b>=0)
            hash[b]=1;
        }
        for(a=1;a<100000;a++)
        {
            if(hash[a]!=1)
            {
            cout << a << endl;
            break;
            }
        }
    }
	return 0;
}
