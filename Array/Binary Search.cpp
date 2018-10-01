#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int Start,int End,int Find)
{
    if(End>=Start){
    int mid;
    mid=(Start+End)/2;
    if(arr[mid]==Find)
        return mid;
    else if(arr[mid]>Find)
        return binarysearch(arr,Start,mid-1,Find);
    else if(arr[mid]<Find)
        return binarysearch(arr,mid+1,End,Find);
    }
    return 1;
}

int main()
{
    int arr[]={1,4,6,8,13,25,60};
    int x=13,position;
    int arrsize=sizeof(arr)/sizeof(arr[0]);
    position=binarysearch(arr,0,arrsize-1,x);
    if(position==1)
        cout << "Not Found";
    else
        cout << "Found position  " << position;
    return 0;
}
