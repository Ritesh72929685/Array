// Time Complexity = O(n)
/*
#include<iostream>
using namespace std;

void frequenciesCount(int arr[] , int n){
    int res = 1 , j = 1;
    while(j < n){
        while(j < n && arr[j - 1] == arr[j])
        {
            res++;
            j++;
        }
        cout << arr[j - 1] << " "<< res << endl;
        res = 1;
        j++;
    }
    if(n == 1 || arr[j -1] != arr[j - 2]){
        cout << arr[j - 1] << " " << "1" << endl;
    }
}
int main(){
    int arr[] = { 2 , 2 , 10 , 10 ,10 , 50 };
    int n = sizeof(arr)/sizeof(arr[0]);
    frequenciesCount(arr , n);
    return 0;
}
*/

// ***Map Approach ****
// Result will be printed in random order

#include<iostream>
#include<unordered_map>
using namespace std;

void frequenciesCount(int arr[] , int n){
    unordered_map<int , int>m;
    for(int i = 0; i < n; i++){
        m[arr[i]]++;
    }
    for(auto it = m.begin() ; it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
}
int main(){
    int arr[] = { 2 , 2 , 10 , 10 ,10 , 50 };
    int n = sizeof(arr)/sizeof(arr[0]);
    frequenciesCount(arr , n);
    return 0;
}