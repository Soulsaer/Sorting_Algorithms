// Modified Bubble Sort Algorithm
// input : size(n), arr[];
// ouput : sorted array

#include<iostream>
using namespace std;

void bubble_sort(int arr[],int n)
{
    
    for(int i=1;i<n;i++)
    {
        int flag = 0; // Flag variable is checked if the swapping is done in the array or not.
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                flag = 1; 
            }
        }
        if(flag==0)
        {
            return ;
        }
    }
}
int main()
{
    int n =0;
    cin>> n;
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

}