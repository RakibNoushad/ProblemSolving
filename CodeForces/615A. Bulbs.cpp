#include<bits/stdc++.h>
using namespace std;
 
typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;
 
#define SQR(x) ((x)*(x))
#define pb push_back
#define pwr(x,y) (int)pow(x,y)+0.5
#define ub(a,b)  upper_bound(a.begin(),a.end(),b)-a.begin()
#define lb(a,b)  lower_bound(a.begin(),a.end(),b)-a.begin()
#define srt(a)   sort(a.begin(),a.end())
#define wl(t)    cin >> t; while(t--)
 
char x[200010],y[200010],z[200010];
int a[200010],b[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    int n, t, i, j,k,f=0,mn,m,dif=0,pos,p,l=0,h=0;
    LLI sum =0;
 
    cin >> n >> m;
    while(n--)
    {
        cin >> j;
        while(j--)
        {
            cin >> i;
            a[i]=1;
        }
    }
    for(i=1;i<=m;i++)
    {
        if(a[i]==0) f=1;
    }
    if(f==0) cout << "YES\n";
    else cout << "NO\n";
    cout << endl;
   
 
 
return 0;
}