
// ********* To check if an arrray is sorted or not and return ture and false *********
// *************** Naive approach *************
// Time Complexity = O(n^2)

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int arr[] = { 2,5,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr, n);
    return 0;
}

// ************* Efficient Approach *********************
// Time Complexity = O(n)
/*
#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[] , int n)
{
    for(int i = 1; i<n; i++)
    {
        if(arr[i] < arr[i-1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int arr[] = { 2,5,8,10,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr, n);
    return 0;
}
*/
