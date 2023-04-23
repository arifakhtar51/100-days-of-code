#include<bits/stdc++.h>
using namespace std;

int minSubarraySum(int arr[], int n, int k) 
{
    int sum=0;
    int mn=INT_MAX;
    for(int i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    mn=min(mn,sum);
    for(int i=k;i<n;i++)
    {
        sum=sum+(arr[i]-arr[i-k]);
        mn=min(mn,sum);
    }
    return mn;
}
int main()
{
    int arr[]={10, 4 ,2 ,5 ,6, 3 ,8 ,1};
    int n=8;
    int k=3;
    int minSum=minSubarraySum(arr,n,k);
    cout<<"minimum sum is"<<minSum<<endl;
}
