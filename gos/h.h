
struct XX
{
    char a[100];
    long long huge;
};

XX cnilinkey[1000];

int uy;
int cmps(XX a,XX b)
{
    return a.huge<b.huge;
}


int cnilin_forhhh(char *x)
{

    sprintf(x,"{\"dest_dir\"  :   \"%%s\",\n\
    \"bucket\"    :   \"oucjudge\",\n\
    \"domain\"    :   \"http://7xrasr.com1.z0.glb.clouddn.com\",\n\
    \"access_key\"    :   \"iFYg0UuCbUHK_eSj1SxzjrAH68kVtRoPKyhTcOiv\",\n\
    \"secret_key\"    :   \"ocn7jjNDyYUQjjrJNS49RZi881NA60My8kZRq3f3\",\n\
    \"is_private\"    :   false,\n\
    \"prefix\"    :   \"%%s\",\n\
    \"suffix\"   :   \"%%s\"\n}");
    return 0;
}

int h(char *x)
{
    FILE *lg;
    char username[100];
    lg=fopen(".location.conf","r");
    if(lg==NULL)
    {
        printf("Sorry sign in first PLEASE\n");
        return 0;
    }
    fscanf(lg,"%s",username);
    fclose(lg);
    uy=0;
    char fororder[200];
    sprintf(fororder,"./qshell listbucket oucjudge %s .forh.list",x);
    system(fororder);
    lg=fopen(".forh.list","r");

    char inside[200];
    while(fscanf(lg,"%s",inside)!=EOF)
    {
        int len=strlen(inside);
        int cuo=0;
        int cuo1=0;
        long long junjun=10000000000000;
        cnilinkey[uy].huge=0;
        if(inside[len-1]!='g')
        {
            continue;
        }

        for(int i=0;i<len;i++)
        {
            cnilinkey[uy].a[i]=inside[i];

            if(cuo==1&&cuo1==0)
            {
                cnilinkey[uy].huge+=junjun*(long long)(inside-'0');
                junjun/=10;
            }
            if(inside[i]=='-'&&cuo1==0)
            {
                cuo=1;
            }
            if(inside[i]=='-'&&cuo==1)
            {
                cuo1=1;
            }

        }
        cnilinkey[uy].a[len]='\0';
        uy++;

        for(int i=0;i<4;i++)
        {
            fscanf(lg,"%s",inside);
        }
    }
    sort(cnilinkey,cnilinkey+uy,cmps);

    fclose(lg);

  /*  for(int i=0;i<uy;i++)
    {
        printf("%s\n",cnilinkey[i].a);
    }*/
    char dog[500];
    cnilin_forhhh(dog);
    char p1[100];
    char p2[50];
    char p3[50];
    sprintf(p1,"./cnilingomsg/");
    sprintf(p2,"%s",x);
    sprintf(p3,"msg");
    lg=fopen("forhhh.conf","w");
    fprintf(lg,dog,p1,p2,p3);
    fclose(lg);
  //  printf("====================\n");
    char sky[2000];
    sprintf(sky,"./qshell qdownload 10 forhhh.conf > .linshis");
    system(sky);

    for(int i=0;i<uy;i++)
    {
        //printf("%s",cnilinkey[i].a);
        sprintf(sky,"./cnilingomsg/%s",cnilinkey[i].a);
        lg=fopen(sky,"r");
     //   printf("======================\n");
        fscanf(lg,"%s",sky);
        fclose(lg);
        printf("==>>%s\n",sky);

    }


    return 0;
}
