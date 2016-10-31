#include <iostream>

using namespace std;

int main()
{
    int n,key;
    cout<<"enter no. of elements :-  ";
    cin>>n;
    int a[n];
    cout<<"enter elements in increasing order\n";
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"enter elements to be searched :- ";
    cin>>key;
    int beg=0,end=n,mid=(beg+end)/2;
    while(beg<=end && a[mid]!=key){
        if(a[mid]<key)
            beg=mid-1;
        else
            end=mid+1;
        mid = (beg+end)/2;
    }
    if(a[mid]==key)
        cout<<key<<" found at position "<<mid+1;
    else
        cout<<key<<" not found.";

    return 0;
}
