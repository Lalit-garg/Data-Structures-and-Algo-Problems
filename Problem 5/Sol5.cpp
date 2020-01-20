#include<bits/stdc++.h>
using namespace std;
struct Hashtableentry{
        int k=-1;
        int index;
        char value;
    };
int firstUniqChar(string s) {
int n=s.length();
int c=0;
struct Hashtableentry t[n];
for(int j=0;j<n;j++)
{
    for(int i=0;i<=j;i++)
    {
    if(t[i].k==-1)
    {
        t[i].k++;
        t[i].value=s[j];
        t[i].index=j;
       	c++;
	i=j+1;
    }
    else if(t[i].value==s[j] && t[i].k!=-1)
    {
        t[i].k++;
	i=j+1;
    } 
    
    }  
}
cout<<"c="<<c<<endl;
for(int i=0;i<c;i++)
{
    if(t[i].k==0)
        return t[i].index;
}
return -1;
}
int main() 
{
string s="loveleetcode";
int y=firstUniqChar(s);
cout<<"y="<<y;
return 0;
}

