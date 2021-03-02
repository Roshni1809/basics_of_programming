#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int space=1;
    int star=n-1;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<space;j++)
        {
            cout<<"\t";
        }
        for(int j=star;j>=0;j--)
        {
            cout<<"*\t";
        }
        
        cout<<endl;
        
        space++;
        star--;
    }
    
    return 0;

}