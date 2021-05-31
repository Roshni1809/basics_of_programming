#include<iostream>

using namespace std;

int digit(int n, int d)
{  int c=0,r;
    
    while(n>0)
    {
        r=n%10;
        n=n/10;
        
        
        if(r==d)
        {
            c++;
        }
    }
    
      return c;
}


int main()
    {
     
     int n,d;
     
     cin>>n>>d;
     
     int freq=digit(n,d);
     cout<<freq;
     
     return 0;   
    }