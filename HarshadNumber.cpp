/*Check whether number is Harshad number or not*/
//Nivya Talokar 1804394@kiit.ac.in//

#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int a=n;
    while(n>0){
        int r;
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    
    if(a%sum==0){
        cout<<"Harshad Number";
    }
    else
    {
        cout<<"NOT";
    }
    
}