#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int len = 5;
    string chars = "l3asti";
    for(int i0=0;i0<=6;i0++)
    {
        for(int i1=1;i1<=6;i1++)
        {
            for(int i2=2;i2<=6;i2++)
            {
                for(int i3=3;i3<=6;i3++)
                {
                    for(int i4=4;i4<=6;i4++)
                    {
                        cout<<chars[i0]<<chars[i1]<<chars[i2]<<chars[i3]<<chars[i4];
                    }
                }
            }
        
        }
    }
    return 0;
}