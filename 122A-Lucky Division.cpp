#include <iostream>

using namespace std;

int main()
{
    int n;
    int luckyset[]={777,774,747,744,477,474,447,444,77,74,47,44,7,4};
    int  lucky = 0;
    cin>>n;
    for(int i = 0 ;i < 14 ;i ++)
        if(n % luckyset[i]==0)
        {
            lucky = 1;
            break;
        }
        if(lucky == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
}
