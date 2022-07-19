
// ******** Remove duplicate form a sorted array *************

// ************* Naive Approach **************

/*#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[] , int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i = 1; i< n ; i++)
    {
        if(temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }
    for(int i = 0 ; i<res; i++)
    {
        arr[i] = temp[i];
    }
    return res;
}
int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Removal"<<endl;

    for(int i = 0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
    }

    cout<<endl;

    n = removeDuplicate(arr, n);

    cout<<"After Removal"<<endl;

    for(int i = 0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
    }
    return 0;
}*/

// ********** Efficient Approach *********************
// Time Complexity = O(n)

#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int n)
{
    int res = 1;
    for(int i = 1; i<n; i++)
    {
        if(arr[res - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int arr[] = {10, 20, 20, 30, 30, 30};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Removal"<<endl;

    for(int i = 0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
    }

    cout<<endl;

    n = removeDuplicate(arr, n);

    cout<<"After Removal"<<endl;

    for(int i = 0; i < n; i++)
    {
    	cout<<arr[i]<<" ";
    }
    return 0;
}