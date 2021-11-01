#include <iostream>
using namespace std;
int main() {
  int c,a,b,n,u;
  cin>>n>>u;
    a=u;
    b=0;c=0;
    for (;a<=n;)
    {
        a=a+n;
        b=b+1;
    }
    c=b+u-a;
    cout<<c;
  return 0;
}
