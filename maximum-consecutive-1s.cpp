// Maximum consecutive ones in a binary array

// *********** Naive Approach *************
// Time complexity = O(n^2)

#include<iostream>
using namespace std;


int maxConsecutiveOnes(int arr[] , int n)
{
    int res = 0;
    for(int i = 0 ; i<n ; i++)
    {
        int current = 0;
        for(int j = i; j<n ; j++)
        {
            if(arr[j] == 1)
            {
                current++;
            }
            else{
                break;
            }
        }
        res = max(res,current);
    }
    return res;
}
int main()
{
    int arr[] = {0,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxConsecutiveOnes(arr,n);
    return 0;
}


// *********** Efficient Approach **************
// Time complexity = O(n)
/*
#include<iostream>
using namespace std;

int maxConsecutiveOnes(int arr[] , int n)
{
    int res = 0 , current = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i] == 0)
        {
            current = 0;
        }
        else
        {
            current++;
            res = max(res,current);
        }
        
    }
    return res;
}
int main()
{
    int arr[] = {0,1,1,1,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxConsecutiveOnes(arr,n);
    return 0;
}

*/