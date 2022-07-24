// In this problem we gonna subtract arr[j] - arr[i] for which the difference should be maximum

//************* Naive Approach *************
// Time Complexity = O(n^2)
// Input = arr[2,3,10,6,4,8,1]
// Output = 8
/*
#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0];
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            res = max(res,arr[j] - arr[i]);
        }
    }
    return res;
}
int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxDiff(arr,n);
    return 0;
}
*/
// ******* Efficient Approach *************
// Time Complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

int maxDiff(int arr[],int n)
{
    int minval = arr[0];
    int res = arr[1] - arr[0];
    for(int i = 1; i < n; i++)
    {
        res = max(res, arr[i] - minval);
        minval = min(minval,arr[i]);
    }
    return res;
}
int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxDiff(arr,n);
    return 0;
}
