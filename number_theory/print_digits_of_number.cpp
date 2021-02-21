#include <iostream>
using namespace std;


int main(){
    int n,r,ar[100];
    cin >> n;
    int i=0;
    while(n!=0)
    {
        r=n%10;
        ar[i]=r;
        i++;
        n=n/10;
    }
    
    // reversing the digits
    for(int j=i-1;j>-1;j--)
    {
        cout<<j<<endl;
    }
    
    
    return 0;
    
}
