#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    //to get the number of digits
    
    int temp=n;
    int nod=0; //nod=number of digits
    
    while(temp>0)
    {
        temp=temp/10;
        nod++;
    }
    // for larger number greatet than k.
   
    k=k%nod; 
    
    // for negative numbers
    
    if(k<0)
    {
        k=k+nod;
    }
    
    
    int div=1;
    int mul=1;
    for(int i=1;i<=nod;i++)
    {
       if(i<=k)
       {
           div=div*10;
       }
       
       else
         {
             mul=mul*10;
         }
    }
    
    int q= n/div;
    int r=n%div;
    
    int rotated= r*mul+q;
    
    cout<<rotated;
    
    return 0;

}