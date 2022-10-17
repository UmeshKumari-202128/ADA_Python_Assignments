#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first 
#define ss second 

bool compare(pii a,pii b){
    double d1 = (double)a.ff/a.ss;
    double d2 = (double)b.ff/b.ss;

    return d1>d2;
}
int main(){
    int n,w;
    cout<<"Enter the weight of knapsack :"<<endl;
    cin>>w;
    cout<<"Enter the no. of items :"<<endl;
    cin>>n;
    vii a(n);
    cout<<"Enter the value and weight of item"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i].ff>>a[i].ss;
        cout<<endl;
    }
    cout<<"values and profit:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i].ff<<" "<<a[i].ss;
        cout<<endl;
    }
    sort(a.begin(),a.end(),compare);
    
    int ans =0;

    for(int i=0;i<n;i++){
        if(w>=a[i].ss){
            ans+=a[i].ff;
            w-=a[i].ss;
        }
    }
    cout<<endl;
    cout<<"The maximum profit is "<<ans;
    return 0;
}