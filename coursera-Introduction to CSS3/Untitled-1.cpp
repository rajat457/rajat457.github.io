#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void convertToWave(vector<int>& arr, int n){
        int i=0,j=1;
        while(i<=n-1 && j<=n-1){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i+=2;j+=2;
        }
    }
};

int main(){
    int t,n;
    cin>>t; 
    while(t--) {
        cin>>n; 
        vector<int> a(n); 
        for(int i=0;i<n;i++)
            cin>>a[i]; 
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; 
            
        cout<<endl;
    }
} 