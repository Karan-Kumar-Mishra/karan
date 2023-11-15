#include<iostream>
#include<stdio.h>
using namespace std;
int find_peak_element(int arr[],int low,int high, int n)
{
    int mid=low+(high-low)/2;
    if((arr[mid]==0|| arr[mid-1] <= arr[mid]) && (mid==n-1 || arr[mid] >= arr[mid+1]))
    {
        return arr[mid];
    }
    else if(mid> 0 && arr[mid]>arr[mid+1])
    {
        find_peak_element(arr,low,mid-1,n);
    }
    else{
        find_peak_element(arr,mid+1,high,n);
    }
}
int main()
{
    int arr[]={0,6,8,5,7,9};
    int n=6;
    cout<<"peak element in array=> "<<find_peak_element(arr,0,n-1,n);
    return 0;
}