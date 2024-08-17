#include<iostream>
using namespace std;
int main(){
    int sum1=0,sum2=0;
    int num;
    cout<<"enter the number";
    cin>>num;
    for(int itr=0;itr<=num;itr++){
        if(itr%4==0){
            sum1=sum1+itr;
        }
        else{
            sum2=sum2+itr;
        }
    }
    int sum3=0;
    cout<<sum1<<" "<<sum2<<endl;
    sum3=sum2-sum1;
    cout<<"DIFFRENCE IS"<<sum3<<endl;
}