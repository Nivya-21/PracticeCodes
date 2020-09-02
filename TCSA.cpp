#include <bits/stdc++.h>

using namespace std;

int main() {

int n;

string s;

cin>>n>>s;

vector<pair<int,int>> checker(n,{INT_MAX,INT_MAX});

for(int m=0;m<n;m++)

{
 
if(s[m]=='A')

{

int t=0;

int j=m-1;

if(j>=0)

{

for(j;j>=0;j--)

{

if(s[j]=='-')

{

checker[j].first=min(checker[j].first,t);

}

else if(s[j]=='A'||s[j]=='B')

{

break;

}

++t;

}

}

}

else if(s[m]=='B')

{

int t=0;

int j=m+1;

if(j<n)

{

for(j;j<n;j++)

{

if(s[j]=='-')

{

checker[j].second = min(checker[j].second,t);

}

else if(s[j]=='B'||s[j]=='A')

{

break;

}

t++;

}

}

}

}

int a_count=0;

int b_count=0;

for(int mt=0;mt<n;mt++)

{

int x = checker[mt].first;

int y = checker[mt].second;

if(s[mt]=='A')

{

a_count++;

}

else if(s[mt]=='B')

{

b_count++;

}

if(s[mt]=='-')

{

if(x>y)

{

b_count++;

}

else if(x<y)

{

a_count++;

}

}

}

if(a_count>b_count)

{

cout<<"A";

}

else if(b_count>a_count)

{

cout<<"B";

}

else

{

cout<<"Coalition government";

}

}