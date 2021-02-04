#include <iostream>
using namespace std;

int main()
{
    int n ,cond = 5;
    cin>>n;
    int num = n;
    while (n != 0){
        if(n % 10 != 7 && n % 10 != 4)
         {
            cond = 0;
            break;
        }
            cond = 1;
            n /= 10;
    }
    if(cond == 0)
    {
        if(num%7 == 0 || num%4 ==0|| num%44 ==0|| num%47 ==0
           || num%74 ==0|| num%77 ==0|| num%444 ==0|| num%447 ==0
           || num%474 ==0|| num%744 ==0|| num%747 ==0|| num%777 ==0
           || num%477 ==0|| num%774 ==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;

}
