/*Decimal to Binary Conversion*/
//Nivya Talokar 1804394@kiit.ac.in//
#include <bits/stdc++.h> 
#include<cmath>

using namespace std;
void DecimalToBinary(int n) {
    int bit;
    int long b=floor(log2(n))+1;
    vector <int> binaryNumber(b);
    int num=n;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   
   for (int j = i - 1; j >= 0; j--)
   cout << binaryNumber[j];
   cout<<endl;
}
int main() {
   int n;
   cin>>n;
   DecimalToBinary(n);
   return 0;
}