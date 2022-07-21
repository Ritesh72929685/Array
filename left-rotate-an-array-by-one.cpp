// Left rotate an array by 1 places
// Time Complexity = O(n)

#include<iostream>
using namespace std;

void leftRotateByOne(int arr[] , int n){
    int temp = arr[0];
    for(int i = 1 ; i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
    for(int i = 0 ; i < n; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}
int main(){
    int arr[] = {3 , 1 , 5 ,20 , 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    leftRotateByOne(arr , n);
    return 0;
}