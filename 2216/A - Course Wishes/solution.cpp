#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;cin>>T;
    while(T--){
        int n,k;cin>>n>>k;
        vector<int> cap(k+1);
        for(int i=1;i<=k;i++)cin>>cap[i];
        vector<int> lvl(n+1);
        vector<int> cnt(k+2,0);
        for(int i=1;i<=n;i++){
            cin>>lvl[i];
            if(lvl[i]<=k)cnt[lvl[i]]++;
        }
        vector<int> ops;
        while(true){
            bool done=true;
            for(int i=1;i<=n;i++)if(lvl[i]!=k+1){done=false;break;}
            if(done)
            break;
            bool moved=false;
            for(int i=1;i<=n && !moved;i++){
                int v=lvl[i];
                if(v==k+1)continue;
                if(v==k || cnt[v+1]<cap[v+1]){
                    if(v<=k)cnt[v]--;
                    if(v+1<=k)cnt[v+1]++;
                    lvl[i]++;
                    ops.push_back(i);
                    moved=true;
                }
            }
            if(!moved || (int)ops.size()>1000){ops.clear();break;}
        }
        if(ops.empty()){
            bool ok=true;
            for(int i=1;i<=n;i++)if(lvl[i]!=k+1)ok=false;
            if(!ok){cout<<-1<<endl;continue;}
        }
        cout<<ops.size()<<endl;
        for(int x:ops)cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}