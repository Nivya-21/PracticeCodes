//To find GCD of a given array//
//Nivya Talokar , 1804394@kiit.ac.in//
//To find GCD of n number, function method//
#include <bits/stdc++.h> 
using namespace std; 

// Function to return gcd of a and b 
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

    // Function to find gcd of array of 
// numbers 
int findGCD(vector<int> &array, int n) 
{ 
    int result = array[0];  
    for (int i = 1; i < n; i++) 
    { 
        result = gcd(array[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 

  int main(){
    
    int flag=0;
    int n,gcd=1;  //gcd=1, as if no other number, 1 will always be a gcd of any rray of number//
    cin>>n;
    cout<<endl;  //Number of elements in array//
    vector <int> array(n);
    for(int i=0; i<n;i++){
        cin>>array[i];     //Creation of vector dynamic array//
    }
   cout << findGCD(array, n) << endl; 
}
        
    
   


