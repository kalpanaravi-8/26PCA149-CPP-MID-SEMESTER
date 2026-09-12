#include <iostream>
using namespace std;

struct T { string s; bool d; };

int main() {
    T a[15]; int n=0,c,x;
    while(1) {
        cout<<"\n1.Add 2.Done 3.Pending 4.Completed 5.Delete 6.Exit\n";
        cin>>c;
        switch(c) {
        case 1: cin.ignore(); getline(cin,a[n].s); a[n++].d=0; break;
        case 2: cin>>x; a[x-1].d=1; break;
        case 3: for(int i=0;i<n;i++) if(!a[i].d) cout<<a[i].s<<endl; break;
        case 4: for(int i=0;i<n;i++) if(a[i].d) cout<<a[i].s<<endl; break;
        case 5: cin>>x; for(int i=x-1;i<n-1;i++) a[i]=a[i+1]; n--; break;
        case 6: return 0;
        }
    }
}
