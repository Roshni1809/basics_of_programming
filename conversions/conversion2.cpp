#include<iostream>

using namespace std;

int decimaltobase(int n, int base)
{
    int r,num,p=1;
    
    while(n>0)
    {   
        r=n%base;
        
        n=n/base;
        num=num+r*p;
         p=p*10;
        
    }
    
    return num;
}

int main()
{
    int n,base;
    
    cin>>n>>base;
    
    int conversion=decimaltobase(n,base);
    
    cout<<conversion;
    
    return 0;
}