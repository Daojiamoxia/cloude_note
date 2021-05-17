#include<iostream>
#include<cmath>
#include<cctype>
using namespace std;
typedef long long ll;
const int N=1e5;
string s,aim="hello";
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>s;
    int sum=0;
    for(int i=0;i<s.size();++i){
        if(s[i]==aim[sum]) sum++;
        if(sum>=5) break;
    }
    if(sum==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
