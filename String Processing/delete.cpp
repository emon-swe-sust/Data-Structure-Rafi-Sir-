#include<bits/stdc++.h>
using namespace std;

string Substring(string String,int Start,int Length)
{
    string sub1="";
    for(int i=Start;i<Start+Length;i++)
       sub1=sub1+String[i];
    return sub1;
}

string Delete(string String,int position,int length)
{
    string sub;
    sub=Substring(String,0,position);
    sub=sub+Substring(String,position+length,String.size()-position-length);
    return sub;
}

int main()
{
    int pos,len;
    string String;
    cin >> String >> pos >> len;
    String=Delete(String,pos,len);
    cout << String;
    return 0;
}
