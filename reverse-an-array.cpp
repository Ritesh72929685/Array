
// ************ Reverse the given Array *************

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[] , int n)
{
    int low = 0 , high = n-1;
    while(low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
int main()
{
    int arr[] = {2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Before reverse "<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After reverse "<<endl;
    reverse(arr,n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}