/*
Beautiful Triplets - Hackerrank
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int size, d;
    cin>>size>>d;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    sort(arr,arr+size);
    int count=0;
    for(int j=0;j<size;j++){
        if(binary_search(arr,arr+size,arr[j]+d))
        {
            if(binary_search(arr+d,arr+size,arr[j]+2*d)){
                count++;
            }
        }
    }
    cout<<count;
}