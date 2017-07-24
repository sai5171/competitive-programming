#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<long long int>> v(6,vector<long long int>(6,0));
    for(auto i=0;i<6;i++){
        for(auto j=0;j<6;j++){
            long long int x;
            cin >> x;
            v[i][j]=x;
        }
    }
    long long int res=-5171;
    for(auto i=0;i<4;i++){
        for(auto j=0;j<4;j++){
            long long int count=0;
            count+=v[i][j];
            count+=v[i][j+1];
            count+=v[i][j+2];
            count+=v[i+1][j+1];
            count+=v[i+2][j];
            count+=v[i+2][j+1];
            count+=v[i+2][j+2];
            res=max(res,count);
        }
    }
    cout << res << endl;
    return 0;
}
