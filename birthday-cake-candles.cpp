/*
You are in charge of the cake for your niece's birthday and have decided the cake will have one candle for each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones. Your task is to find out how many candles she can successfully blow out.

For example, if your niece is turning 4 years old, and the cake will have 4 candles of height 4,4,1,3 she will be able to blow out 2 candles successfully, since the tallest candles are of height 4 and there are 2 such candles.

Test Case:

4
3 2 1 3
*/

#include <bits/stdc++.h> 
using namespace std; 
  
/* Function to sort an array using insertion sort*/
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
    int size,count=1;
    cin>>size;
    int arr[size];

    for(int l=0;l<size;l++){
        cin>>arr[l];
    }

    insertionSort(arr, size);  

    int max = arr[size-1];

    for(int k=0;k<size-1;k++){
        
        if(arr[k]==max){
            count++;
        }
    }

    cout<<count;
 
  
    return 0;  
}  