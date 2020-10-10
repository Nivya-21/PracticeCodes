//Print first N prime numbers//
//Nivya Talokar 1804394@kiit.ac.in//
//Using sqrt method Time Complexity: O(N * N)//
#include<iostream>
#include<cmath>

using namespace std;
//function check whether a number is prime or not //
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    
    for (int i = 5; i * i <= n; i=i+6) //Every prime number can be written in way -> 6n+1 or 6n-1 9except 2&3)//
        if (n % i == 0 || n % (i + 2) == 0) //i+2 to jump it to next odd number, all even numbers are non prime(except2)//
            return false; 
  
    return true; 
} 
  
// Function to print primes 
void printPrime(int n) 
{ 
  int nprime;
  
 
    int i=3;
    while(n>0){
    
        if (isPrime(i)){
          nprime=i;
        }
          i=i+2;
         n--;
        
    } 
  
    cout<<" "<<nprime;
}
// Driver Code 
int main() 
{ 
    int n;
    cin>>n;
    printPrime(n); 
} 
//Best method is Sieve of Eratosthenes method with Time complexity : O(n*log(log(n)))//