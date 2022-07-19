
// ********* Finding the index of second largest element in an array ************

// Naive Approach
// Time Complexity = O(n)
// But require 2 traversal of the array

#include<iostream>
using namespace std;

int getLargest(int arr[],int n)
{
    int large = 0;
    for(int i = 1; i<n; i++)
    {
        if(arr[i] > arr[large])
        {
            large = i;
        }
    }
    return large;
}
int secondLargest(int arr[], int n)
{
    int largest = getLargest(arr,n);
    int res = -1;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] != arr[largest])
        {
            if(res == -1)
            {
                res = i;
            }
            else if(arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {2,5,6,20,44,66};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargest(arr,n);
    return 0;
}


// Efficient Approach
/*
#include<iostream>
using namespace std;

int secondLargestElementIndex(int arr[] , int n){
    int res = -1 , largest = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(res == -1 || arr[i] > arr[res]){
                res = i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {2,5,6,200,44,66};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<secondLargestElementIndex(arr,n);
    return 0;
}
*/