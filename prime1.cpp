#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

void sieve(int v[])
{
    for(int i=4;i<32000;i+=2)
    {
        v[i] = 1;
    }
    for(int i=3;i<32000;i+=2)
    {
        if(v[i]==0)
        {
            for(int j=i*i;j<32000;j+=(2*i))
            {
                v[j] = 1;
            }
        }
    }
}

int main()
{
    int T;
    cin>>T;
    int v[32000] = {0};
    v[0] = 1;
    v[1] = 1;
    sieve(v);
 
    for(int t=0;t<T;t++)
    {
        if(t)
            cout<<endl;
        int a, b;
        cin>>a>>b;
        if(a<=2)
        {
            cout<<2<<endl;
            a=3;
        }
        else if(a%2==0)
            a++;

       for(int i=a;i<=b;i+=2)
        {
            if(i<32000 && v[i] == 0)
                cout<<i<<endl;
            else
            {
                bool isPrime = (i!=1);
               for(int j=2;j*j<=i;j++) {
                     if(v[j]==0 && i%j==0)
                     {
                         isPrime = false;
                         break;
                     }
                     
                   }
               if(isPrime)
                   cout<<i<<endl;
            }
        }
    }

    return 0;
}
