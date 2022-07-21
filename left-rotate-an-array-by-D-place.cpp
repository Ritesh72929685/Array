// *********** Left Rotate an array by D place **************

// ********** Naive Approach ********************

// Input : arr[] = {1,2,3,4,5}
// d = 2
// Output : arr[] = {3,4,5,1,2}
// Time Complexity = O(n * d)

#include<iostream>
using namespace std;

void leftRotate(int arr[],int n)
{
    int temp = arr[0];
    for(int i = 1; i<n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
void leftRotateByD(int arr[],int n, int d)
{
    for(int i = 0; i<d; i++)
    {
        leftRotate(arr,n);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    cout<<"Before Rotation of array"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Rotation of array"<<endl;
    leftRotateByD(arr,n,d);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;                      // T.C = O(nd)
                                   // A.S = O(1)
}


// **************** Better Approach *************
// T.C = O(n)
// A.S = O(d)
/*
#include<bits/stdc++.h>
using namespace std;

void leftRotateByD(int arr[],int n,int d)
{
    int temp[d];
    for(int i = 0; i<d; i++)
    {
        temp[i] = arr[i];
    }
    for(int i = d; i<n; i++)
    {
        arr[i-d] = arr[i];
    }
    for(int i = 0; i<d; i++)
    {
        arr[n-d+i] = temp[i];
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    cout<<"Before Rotation of array"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Rotation of array"<<endl;
    leftRotateByD(arr,n,d);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;                      // T.C = O(n)
                                   // A.S = O(d)
}
*/

// ************* Efficient Approach ******************
// Logic = Reverse the first D elements .........
// Then reverse the rest of elements other than D .........
// Now reverse the whole array ...........
/*
#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int low,int high)
{
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void driver(int arr[],int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    cout<<"Before Rotation of array"<<endl;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"After Rotation of array"<<endl;
    driver(arr,n,d);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;                      // T.C = O(n)
                                   // A.S = O(1)
}
*/
