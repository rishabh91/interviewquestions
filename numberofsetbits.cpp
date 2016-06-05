//Write an efficient program to count number of 1s in binary representation of an integer.
//Implementation of Brian Kernighan’s Algorithm:
#include <iostream>
using namespace std;
int count_one (int n)
{ int cnt;
    while(n)
    {
        n = n & (n-1);
        cnt++;
    }
    return cnt;
}

int main()
{
    int T,a,val;
    cin>>T;
   while(T--)
   {cin>>a;
    val=count_one(a);
    cout<<val<<endl;
   	
   }
   return 0;
}
