
//******* Finding the index of the largest element in an array **************

// arr[] = { 2,4,5,10,23,8}

#include<iostream>
using namespace std;

int largeElement(int arr[] , int n)
{
    int res = 0;
    for(int i = 1; i<n; i++)
    {
        if(arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}
int main()
{
    int arr[] = {2,5,6,200,44,66};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<largeElement(arr,n);
    return 0;
}
