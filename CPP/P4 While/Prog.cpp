#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a;
    cin>>a;
    int sum=0;
    int i = 0;
    while(i<a){
        i++;
        sum=sum+1;
        cout<<sum;
    }

    return 0;
}