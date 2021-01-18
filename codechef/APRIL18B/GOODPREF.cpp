#include<bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
  lli t;
  cin >> t;
  while(t--) {
    string s;lli n;
    cin.get();cin >> s;cin >> n;
    
    lli res = 0;
    lli pre = -1;
    lli count = 0;
    lli ac = 0;
    lli bc =0;
    auto in =n;
    for(; in >= 1  ;in--){
      count = 0;  
      for(auto i=0;i<s.length();i++) {
        if(s[i]=='a')
          ac++;
        if(s[i]=='b')
          bc++;
        if(ac>bc) {
          count++;
        }
      }
      res += count;
      //cout << "count:" << count << endl;
      
      
       if(pre == count) {
        //cout << "repeated\n";
        res += (count*(in-1));
        break;      
      }
      pre = count;
    }    
      
    //cout << "ans;";
    cout << res << endl;
  }
  return 0;
}
