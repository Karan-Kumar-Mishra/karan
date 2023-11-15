#include "karan.h"
float find_mid(int *arr,int s,int e,int idx)
{

    if(idx%2==0 && idx >0)
    {
    int mid=(s+e)/2;
    return (arr[mid]+arr[mid-1])/2;
    }
    else
    {
    int mid=(s+e)/2;
    return arr[mid];
    }    

}
int main()
{
    int arr[]={10,15,21,30,18,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
       // cout<<arr[i]<<" "<<endl;
        cout<<find_mid(arr,0,i,i)<<endl;
    }
    //pending
    
    
    return 0;
}