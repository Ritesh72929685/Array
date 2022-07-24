
// ******* Stock buy and Sell Problem ***********

// Time Complexity = O(n)
// Logic :- when you will buy the stock and the prices of stock going down let them going down
//          once the price of stock reach bottom you will buy the stock again and when they going 
//          up let them going once they reach the pick at that point you will sel the stock 


#include<iostream>
using namespace std;

int stockBuySell(int price[] , int n)
{
    int profit = 0;
    for(int i = 1 ; i<n; i++)
    {
        if(price[i] > price[i-1])
        {
            profit += (price[i] - price[i-1]);
        }
    }
    return profit;
}
int main()
{
    int arr[] = {1,5,3,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<stockBuySell(arr,n);
    return 0;
}

