#include <iostream>
using namespace std;

int countpaths(int m , int n)
{
    if(m==0 || n==0)
    {
        return 1;
    }
    else
    return(countpaths(m,n-1)+countpaths(m-1,n));
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int m,n;
        cin >> m >> n ;
        cout << countpaths(m,n) << endl;
    }
	//code
	return 0;
}
