#include <bits/stdc++.h>

using namespace std;
bool validate(pair<int,int>& x,pair<int,int>& y) {
    return x.second<y.second; 
}
int main() {
    int n; 
    cin>>n;

    vector<pair<int,int>> details(n); 

    for(int i=0;i<n;++i) {
        int userId,amount;
        cin>>userId>>amount;
        details[i]=make_pair(userId,amount);
    }

    int queries; 
    cin>>queries;

    for(int i=0;i<queries;++i) {
        int fromUId,toUId,amount;
        cin>>fromUId>>toUId>>amount;
        int fromI=-1,toI=-1;
        for(int j=0;j<n;++j) {
            if(details[j].first==fromUId) {
                fromI=j;
            }
            if(details[j].first==toUId) {
                toI=j;
            }
        }
        if(fromI!=-1&&toI!=-1 && details[fromI].second>=amount) {
            details[fromI].second-=amount; 
            details[toI].second+=amount; 
            cout<<"Success\n";
        } else {
            
            cout<<"Failure\n";
        }
    }
    cout<<'\n';

 sort(details.begin(),details.end(),validate);  

    for(auto hi:details) {
        cout<<hi.first<<" "<<hi.second<<'\n';
    }

    return 0;
}