#include<bits/stdc++.h>
using namespace std;
int ProductSmallestPair(vector<int>arr, int sum) {
    sort(arr.begin(),arr.end());
    int s=arr.size();
    if(s<=2){
        return -1;
    }
    for(int itr=0;itr<s;itr++){
        if(arr[itr]+arr[itr+1]<sum){
            return arr[itr]*arr[itr+1];
            break;
        }
    }
}
int main(){
    int sum;
    cout<<"enter the number";
    cin>>sum;
    cout<<"ener the size of array";
    int n;
    cin>>n;
    vector<int>arr;
    for(int itr=0;itr<n;itr++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<ProductSmallestPair(arr,sum)<<endl;
}