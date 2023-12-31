// Bubble Sort Algorithm
// input : size(n), arr[];
// ouput : sorted array

#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int n =0;
    cin>> n; // size of array to be sorted
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubble_sort(arr,n);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}
