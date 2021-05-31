#include<iostream>

using namespace std;

int anybasetoDecimal(int n, int base)
{
    int r=0,num=0;
    
   
    int p=1;
    while(n>0)
    { 
        r=n%10;
        n=n/10;
        num=num+r*p;
        p=p*base;
    }
    
    return num;
    
}


int main()
{
    int base,n;
    
    cin>>n>>base;
    
    int conversion=anybasetoDecimal(n,base);
    
    cout<<conversion;
    
    return 0;
}