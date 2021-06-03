#include<iostream>
using namespace std;

int maxSumSubarray(int a[], int size)
{
    int maxSum=0;
    int currSum=0;

    for(int i=0;i<size;i++)
    {
        currSum= currSum+ a[i];
        if(currSum>maxSum)
        {
            maxSum = currSum;
        }
        if(currSum<0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int l;
    int arr[]={-5,4,6,-3,4,-1};
    l=sizeof(arr)/sizeof(arr[0]); 
    cout<<maxSumSubarray(arr,l);
    return 0;
}