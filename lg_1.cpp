#include<stdio.h>
#include<string.h>
#include<set>

using namespace std;


int main()
{
    while(1)
    {
        set<int>  a;
        for(int i=0; i<10; i++)
        {
            int x;
            scanf("%d",&x);
            a.insert(x);
        }
        for(int i=0; i<3; i++)
        {
            int x;
            scanf("%d",&x);
            a.erase(x);
        }

        set<int>::iterator gogo;

        for(gogo=a.begin(); gogo!=a.end() ; gogo++)
        {
            printf("%d\n",*gogo);
        }
    }

    return 0;
}
