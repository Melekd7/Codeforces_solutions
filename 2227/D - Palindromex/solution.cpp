#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T; if(!(cin>>T)) return 0;
    while(T--){
        int n; cin>>n;
        int m=2*n;
        vi a(m);
        for(int i=0;i<m;i++) cin>>a[i];
        vi d1(m);
        for(int i=0,l=0,r=-1;i<m;i++){
            int k = (i>r)?1:min(d1[l+r-i], r-i+1);
            while(i-k>=0 && i+k<m && a[i-k]==a[i+k]) k++;
            d1[i]=k; if(i+k-1>r){ l=i-k+1; r=i+k-1; }
        }
        vi d2(m);
        for(int i=0,l=0,r=-1;i<m;i++){
            int k = (i>r)?0:min(d2[l+r-i+1], r-i+1);
            while(i-k-1>=0 && i+k<m && a[i-k-1]==a[i+k]) k++;
            d2[i]=k; if(i+k-1>r){ l=i-k; r=i+k-1; }
        }
        vi bestR(m, -1);
        for(int i=0;i<m;i++){
            int L=i-(d1[i]-1), R=i+(d1[i]-1);
            if(L>=0) bestR[L]=max(bestR[L], R);
            if(d2[i]>0){
                int L2=i-d2[i], R2=i+d2[i]-1;
                if(L2>=0) bestR[L2]=max(bestR[L2], R2);
            }
        }
        vi prefMax(m);
        prefMax[0]=bestR[0];
        for(int i=1;i<m;i++) prefMax[i]=max(prefMax[i-1], bestR[i]);
        auto ok=[&](int k)->bool{
            if(k==0) return true;
            vector<int> freq(k,0);
            int have=0;
            int r=0;
            for(int l=0;l<m;l++){
                while(r<m && have<k){
                    if(a[r]<k){
                        if(freq[a[r]]==0) have++;
                        freq[a[r]]++;
                    }
                    r++;
                }
                if(have==k){
                    int R=r-1;
                    if(prefMax[l]>=R) return true;
                } else break;
                if(a[l]<k){
                    freq[a[l]]--;
                    if(freq[a[l]]==0) have--;
                }
            }
            return false;
        };
        int lo=0, hi=n, ans=0;
        while(lo<=hi){
            int mid=(lo+hi)/2;
            if(ok(mid)){ ans=mid; lo=mid+1; } else hi=mid-1;
        }
        cout<<ans<<"
";
    }
    return 0;
}