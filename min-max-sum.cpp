/*
Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Test Case:
1 2 3 4 5
10 14
*/

#include <bits/stdc++.h> 
using namespace std; 
  
void insertionSort(int arr[], int n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  

        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}   
  
/* Driver code */
int main()  
{  
    int size =5;
    long int sum_min=0, sum_max=0;
    int arr[size];

    for(int i = 0; i<5; i++){
        cin>>arr[i];
    }
    
  
    insertionSort(arr, size); 

    for(int k = 1; k<size;k++){
        sum_max = sum_max + arr[k];
    }

    for(int l=0;l<size-1;l++){
        sum_min = sum_min + arr[l];
    }

    cout<<sum_min<<" "<<sum_max;



  
    return 0;  
}  