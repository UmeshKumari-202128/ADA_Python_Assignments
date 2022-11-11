#include<iostream>
#include<vector>
#include<climits>
#include<limits>
using namespace std;

void ShortestPath(vector<vector<int>>&A){
    for(int m=0;m<A.size();m++){
        for(int s=0;s<A.size();s++){
            for(int e=0;e<A.size();e++){
                if(A[m][e]!=1000 && A[s][m]!=1000){
                    A[s][e]=min(A[s][e],(A[m][e]+A[s][m]));
                }
            }
        }
    }
  
}

int main(){
    int n;
    cout<<"enter the no. of cities :";
    cin>>n;
    vector<vector<int>>A(n,vector<int>(n,-1));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"enter the distance between "<<i<<" and "<<j<<" : ";
            cin>>A[i][j];
        }
    }
    
    ShortestPath(A);
    cout<<"The result is : "<<endl;
    for(int k=0;k<n;k++){
        for(int l=0;l<n;l++){
            cout<<A[k][l]<<" ";
        }
        cout<<endl;
    }


    return 0;

}
