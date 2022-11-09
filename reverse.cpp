#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class reverseArray
{
    public:
    void reversearray(int arr[],int size){
        int i=0, j= size;
        int temp=0;
        while (i<j)
        {
            temp= arr[i];
            arr[i]= arr[j];
            arr[j]= temp;

            i++;
            j--;
        }
        
    }

    

};

void printArray(int arr[], int size){
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        
    }



int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[1]);
    
    reverseArray ob;
    printArray(arr,n);

    ob.reversearray(arr,n-1);

    printArray(arr,n);

}
