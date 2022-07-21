// Move Zero to end
// Naive Approach
// Time Complexity = O(n ^ 2)
/*
#include<iostream>
#include<algorithm>
using namespace std;

void moveZerosToEnd(int arr[] , int n){
    for(int i = 0; i < n ; i++){
        for(int j = i+1; j < n ; j++){
            if(arr[i] == 0){
                swap(arr[i] , arr[j]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {8 , 5 , 0 , 10 , 0 , 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZerosToEnd(arr , n);
    return 0;
}
*/

// Efficient Approach 
// Time Complexity = O(N)

#include<iostream>
#include<algorithm>
using namespace std;

void moveZerosToEnd(int arr[] , int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i] , arr[count]);
            count++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {8 , 5 , 0 , 10 , 0 , 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    moveZerosToEnd(arr , n);
    return 0;
}