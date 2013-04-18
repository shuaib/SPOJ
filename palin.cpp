#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int t=0;t<T;t++)
    {
        string ss, s;
        cin>>ss;
        s = ss;
        int inc, dec;
        inc = s.size()/2;
        dec = inc;
        if(s.size()%2==0)
            dec--;
        for(int i=inc,j=dec;i<s.size() && j>=0;i++,j--)
            s[i]=s[j];
        while(s.size()<=ss.size() && s<=ss)
        {
            int i=dec, j=inc;
            while((s[i]-'0')==9 && i>=0 && j<s.size())
            {
                s[i] = s[j] = '0';
                i--;
                j++;
            }
            if(i<0)
            {
                s = "1"+s;
                int l = s[s.size()-1]-'0';
                l++;
                s[s.size()-1] = (l+'0');
            }
            else
            {
                int l = s[i]-'0';
                l++;
                s[i]=s[j]=(l+'0');
            }

        }
        cout<<s<<endl;
    }
}
