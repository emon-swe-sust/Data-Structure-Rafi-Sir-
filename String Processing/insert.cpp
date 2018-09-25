#include<bits/stdc++.h>
using namespace std;

string Substring(string String,int Start,int Length)
{
    string sub1="";
    for(int i=Start;i<Start+Length;i++)
       sub1=sub1+String[i];
    return sub1;
}

string Insert(string String,int Position,string Substr)
{
    string sub;

    sub=Substring(String,0,Position);
    sub=sub+Substr;
    sub=sub+Substring(String,Position,String.size()-Position);
    return sub;
}

int main()
{
    int Position;
    string String,Substr;
    cin >> String >> Position >> Substr;
    Substr=Insert(String,Position,Substr);
    cout << Substr;
}
