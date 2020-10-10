//Fibonacci series//
//Nivya Talokar 1804394@kiit.ac.in//
//To find nth Fib number//



#include<bits/stdc++.h> 
using namespace std; 
  
int fib(int n) 
{ 
    int n1 = 0, n2 = 1, n3, i; 
    if( n == 0) 
        return n1; 
    for(i = 2; i <= n; i++) 
    { 
       n3 = n1 + n2; 
       n1 = n2; 
       n2 = n3; 
    } 
    return n2; 
} 
  
// Driver code 
int main() 
{ 
    int n;
    cin>>n;
    cout << fib(n-1); //n-1 as in given question in assignment is counting from '1' and not '0'//
    return 0; 
} 
  