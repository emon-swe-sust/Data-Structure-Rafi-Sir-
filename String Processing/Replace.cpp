#include<bits/stdc++.h>
using namespace std;

string Substring(string String,int Start,int Length)
{
    string sub1="";
    for(int i=Start;i<Start+Length;i++)
       sub1=sub1+String[i];
    return sub1;
}

string Replace(string String,string pattern_to_replace,string pattern_to_insert)
{
        string sub;
        int j,k,i;
        for(i=0;i<String.size()+1-pattern_to_replace.size();i++)
        {
            k=0;
            while(String[i]==pattern_to_replace[k])
            {
                k++;
                i++;
                if(k=pattern_to_replace.size())
                {
                    goto here;
                    k=i-k;
                }
            }
        }
        here:;
        sub=Substring(String,0,k+2);
        sub=sub+pattern_to_insert+Substring(String,k+2+pattern_to_replace.size(),String.size()-k-pattern_to_replace.size());
        return sub;
}

int main()
{
    string String,pattern_to_replace,pattern_to_insert;
    cin >> String >> pattern_to_replace >> pattern_to_insert;
    String=Replace(String,pattern_to_replace,pattern_to_insert);
    cout << String;
    return 0;
}
