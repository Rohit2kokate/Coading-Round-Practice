#include<bits/stdc++.h>
using namespace std;
int LargeSmallSum(vector<int>arr){
    vector<int>oddindex;
    vector<int>evenindex;
    int s=arr.size();
    for(int i=0;i<s;i++){
        if(s==0 || s<=3){
            return 0;
        }
        else{
            if(i%2==0 || i==0){
                evenindex.push_back(arr[i]);
            }
            else{
                oddindex.push_back(arr[i]);
            }
        }
    }
    sort(evenindex.begin(),evenindex.end());
    sort(oddindex.begin(),oddindex.end());
    int n=evenindex.size();
    int m=oddindex.size();

    return oddindex[m-2]+evenindex[n-2];
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;

    vector<int>arr;
    for(int itr=0;itr<n;itr++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    cout<<LargeSmallSum(arr)<<endl;
}