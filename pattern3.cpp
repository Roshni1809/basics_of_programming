#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int space=n-1;
    int start=1;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=space;j++)
        {
            cout<<"\t";
        }
        
        for(int j=1;j<=start;j++)
        {
            cout<<"*\t";
        }
        
        cout<<endl;
        
        space--;
        start++;
    }
    
    return 0;
   
    
}