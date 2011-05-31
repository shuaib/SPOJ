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

int main()
{

    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        string s;
        cin>>s;
        stack<char> operands;
        stack<char> operators;
        queue<char> result;
        string r="";
        string t="";
        char c;
        for(int i=0;i<s.size();i++)
        {
            switch (s[i]) 
            {
                case '+':
                case '-':
                case '*':
                case '/':
                case '^':
                    operators.push(s[i]);
                    break;
                case ')':
                    c = operators.top();
                    result.push(c);
                    operators.pop();

                   break;
                case '(':
                   break;
                default:
                    result.push(s[i]);
            }
        }
        while(!result.empty())
        {
            cout<<result.front();
            result.pop();
        }
        cout<<endl;
    }
    return 0;
}
