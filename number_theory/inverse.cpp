#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int d,p=1;
    int rev=0;
    int id,ip;
    //to interchange
    while(n!=0)
    {   
        d=n%10;
        id=p;
        ip=d;
        rev= rev+ id*pow(10,ip-1);
         
         n=n/10;
         p++;
         
        
    }
    
    cout<<rev;
    
    return 0;
}