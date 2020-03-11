#include <bits/stdc++.h>

using namespace std;

int main(){
    int size,pair=0,count=0;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++){
         cin>>arr[i];
    }

    sort(arr,arr+size);

    for(int i=0;i<size;i++){
        if(arr[i]==arr[i+1]){
            count+=1;
            i=i+1;
        }
        else {
        count+=0;
        }
    }
    cout<<count<<"\n";
}