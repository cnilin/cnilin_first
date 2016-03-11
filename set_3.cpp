#include<stdio.h>
#include<string.h>
#include<set>

using namespace std;

struct XX
{
    int a,b;
};
bool operator <(const XX &x,const XX &y)
{
     return x.a<y.a;
}


int main()
{
    set<XX> S;
    for(int i=0;i<7;i++)
    {
            XX ss;
            scanf("%d %d",&ss.a,&ss.b);
            S.insert(ss);
    }
    printf("=======================\n");
    set<XX>::iterator gogo;
    for(gogo=S.begin();gogo!=S.end();gogo++)
    {
        printf("%d %d \n",gogo->a,gogo->b);
    }

    return 0;
}
