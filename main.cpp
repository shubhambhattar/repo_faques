#include <iostream>
using namespace std;

int main()
{
    int n,key;
    cout << "Enter no. of elements :-  ";
    cin >> n;
    int a[n];
    cout << "Enter elements in increasing order\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter elements to be searched :- ";
    cin >> key;
    
    int beg = 0, end = n-1, mid= beg + (end - beg)/2;
    // While the size of the range to be searched is atleaset 1 and element not found:
    while(beg <= end && a[mid] != key)
    {
        // If a[mid] < key, then the key will either be in range [mid+1, end], or not present. Similarly for end.        
	    if(a[mid] < key)
            beg = mid+1;
        else
            end = mid-1;
        mid = beg + (end - beg)/2;
    }

    if(a[mid] == key)
	cout << key << " found at position " << mid+1 << endl;
    else
        cout << key << " not found." << endl;
    return 0;
}
