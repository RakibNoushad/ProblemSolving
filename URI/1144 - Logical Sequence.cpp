#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int  ULLI;
typedef long long int  LLI;
typedef vector<int> vi;

#define SQR(x) ((x)*(x))
#define pb push_back

 
//char x[200010],y[200010];
char a[200010],b[200010],c[200010];
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    long long int n, m, t, i, j,k,f=0,mn=0,mx;
    
    vi v(10000);

      cin >> n;
      
      for(i=1;i<=n;i++)
      {
        j=SQR(i);
        k=i*j;
        for(f=0;f<2;f++)
        {
            cout << i <<" " <<  j <<" " << k << endl;
            j++; k++;

        }
      }



 
    return 0;
}