//To find GCD of a given array//
//Nivya Talokar 1804394@kiit.ac.in//
//To find GCD of n numbe by loop method//
#include <bits/stdc++.h> 
using namespace std; 


int main(){
   
    int flag=0;
    int n,gcd=1; //gcd=1, as if no other number, 1 will always be a gcd of any array of number//
    cin>>n;      //Number of elements in array//
    cout<<endl;
     vector <int> array(n);
    for(int i=0; i<n;i++){
        cin>>array[i];
    }
    int min=*min_element(array.begin(), array.end()); //Finding smallest number in vector array//
    for(int i=min; i>1; i--){  //Iterating from min, to save time and space complexity, more optimal//
        for(int j=0;j<n;j++){      
            if(array[j]%i==0){
                flag=0;
                continue;
                     //Checking number to be divisor of element in array//
            }
            else 
            {
                flag=-1;  //If not intialising flag to be -1//
                break;
            }
        }
        if(flag==0){
            gcd=i;
           
            break;
        }
        else
        {
            continue;
        }
        
        
    }
     cout<<gcd<<endl;
}