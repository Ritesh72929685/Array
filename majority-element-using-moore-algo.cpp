// Majority Elements means an elements that should br present more than n/2 
// *********** Naive Approach *******************
// Time complexity = O(n^2)

#include<iostream>
using namespace std;

/*
int majorityElement(int arr[] , int n)
{
    for(int i = 0 ; i<n; i++)
    {
        int count = 1;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] == arr[i])
            {
                count++;
            }
            if(count > n/2){
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[] = { 8 , 7 , 6, 8, 6 ,6 , 6, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<majorityElement(arr,n);
    return 0;
}

*/

// ********* Efficient Approach ***************
// Using Moore's voting algorithm 
// Time complexity = O(n)

int majorityElement(int arr[] , int n)
{
    int res = 0, count = 1;
    for(int i = 1 ; i< n; i++)
    {
        if(arr[i] == arr[res])
        {
            count++;
        }
        else{
            count--;
            if(count == 0)
            {
                res = i;
                count = 1;
            }
        }

    }
    count = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == arr[res])
        {
            count++;
        }

    }
    if(count <= n/2)
    {
        return -1;
    }
    return res;
}
int main()
{
    int arr[] = {8, 8, 6, 6, 6, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<majorityElement(arr,n);
    return 0;
}









