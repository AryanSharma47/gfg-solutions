#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    unordered_map<int,int> count;

    for(auto i : arr)
    count[arr[i]]++;

     vector<int> v;
    for(int j=0;j<n;j++)
    {
        if(count[arr[j]]==1)
        v.push_back(arr[j]);
    }

    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    return 0;
}