
// All the elements which is right size are smaller then that element then
// that element is leader

// Time Complexity = O(n^2)
/*
#include<iostream>
#include<vector>
using namespace std;

void leadersInArray(int arr[] , int n ){
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = i + 1; j < n; j++){
            if(arr[j] >= arr[i]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            cout << arr[i] << " ";
        }
    }
}
int main(){
    int arr[] = {3 , 29 , 19, 39 , 30 , 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    leadersInArray(arr ,n);
    return 0;
}
*/

// Efficient Approach
// Time Complexity = O(n)
// Auxilary Space = O(n)

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void leadersInArray(int arr[] , int n){
    vector<int>v;
    int currentLeader = arr[n - 1];
    v.push_back(currentLeader);
    for(int i = n - 2; i >= 0; i--){
        if(arr[i] > currentLeader){
            currentLeader = arr[i];
            v.push_back(arr[i]);
        }
    }
    for(int i = v.size() - 1; i >= 0; i--){
        cout << v[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[] = {3 , 29 , 19, 39 , 30 , 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    leadersInArray(arr ,n);
    return 0;
}