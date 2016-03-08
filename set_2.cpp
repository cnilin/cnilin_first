#include<stdio.h>
#include<string.h>
#include<set>

using namespace std;

struct XX
{
      int a;
};


bool operator < (const XX &a,const XX &b){
    return a.a>b.a;
}

//pair<int,int> zidaibijiaohanshu

int main()
{
    set<XX>  S;
    for(int i=0; i<10; i++)
    {
        int x;
        scanf("%d",&x);
        XX o;
        o.a=x;
        S.insert(o);
    }
    set<XX>::iterator gogo;
    for(gogo=S.begin(); gogo!=S.end() ; gogo++)
    {
        printf("%d\n", gogo->a);
    }
    return 0;
}
