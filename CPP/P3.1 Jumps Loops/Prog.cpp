#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a;
    cin>>a;
    int sum=1;
    int i = 0;
    while(i<a){
        i++;
        if(sum%2==0){
            sum=sum+1;
            continue;
        }else{
            cout<<sum;   
            sum=sum+1;
            break;
        }
    }

    return 0;
}