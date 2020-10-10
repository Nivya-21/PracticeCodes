//Print non fib numbers upto n//
//Nivya Talokar 1804394@kiit.ac.in//
#include<bits/stdc++.h> 
using namespace std; 
  
// Returns n'th Non-Fibonacci number 
int nonFibonacci(int n) 
{ 
    // curr is to keep track of current fibonacci 
    // number, prev is previous, prevPrev is 
    // previous of previous. 
    int prevPrev=1, prev=2, curr=3; 
  
    // While count of non-fibonacci numbers 
    // doesn't become negative or zero 
    while (n > 0) 
    { 
        // Simple Fibonacci number logic 
        prevPrev = prev; 
        prev = curr; 
        curr = prevPrev + prev; 
  
        // (curr - prev - 1) is count of 
        // non-Fibonacci numbers between curr 
        // and prev. 
        n = n - (curr - prev - 1); 
    } 
  
    // n might be negative now. Make sure it 
    // becomes positive by removing last added 
    // gap. 
    n = n + (curr - prev - 1); 
  
    // n must be now positive and less than or equal 
    // to gap between current and previous, i.e.,  
    // (curr - prev - 1); 
  
    // Now add the positive n to previous Fibonacci 
    // number to find the n'th non-fibonacci. 
    return prev + n; 
} 
  
// Driver code 
int main() 
{ int n;
 cin>>n;
 while(n--){
     
   cout << nonFibonacci(n+1)<<endl;
 } 
   return 0; 
} 