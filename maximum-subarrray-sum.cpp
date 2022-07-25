// Maximum Subarray(contigous elements) sum
// ***** Naive Approach ***********
// Time complexity = O(n^2) 


#include<iostream>
using namespace std;


int maxSubarraySum(int arr[],int n)
{
    // arr[] = {1,-2,3,-1,2}
    int res = arr[0];
    for(int i = 0; i<n; i++)
    {
        int sum = 0;
        for(int j = i; j<n; j++)
        {
            sum = sum + arr[j];
            res = max(res,sum);
        }
    }
    return res;
}
int main()
{
    int arr[] = {1,-2,3,-1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarraySum(arr,n);
    return 0;
}


// ******** Efficient Approach *****************
// Time complexity = O(n)
/*
int maxSubarraySum(int arr[],int n)
{
    int res = arr[0] , maxEnding = arr[0];
    for(int i = 1 ; i<n ; i++)
    {
        maxEnding = max(maxEnding + arr[i] , arr[i]);
        res = max(res , maxEnding);
    }
    return res;
}
int main()
{
    int arr[] = {-5,1,-2,3,-1,2,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxSubarraySum(arr,n);
    return 0;
}
*/
