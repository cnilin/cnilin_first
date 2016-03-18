#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int cnilin_forfrd(char *x)
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


int cnilindlfriend()
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

    char dog[500];
    cnilin_forfrd(dog);
    char p1[100];
    char p2[50];
    char p3[50];
    sprintf(p1,"./");
    sprintf(p2,"%s-friend.conf",username);
    sprintf(p3,"%s-friend.conf",username);
    lg=fopen("forfrd.conf","w");
    fprintf(lg,dog,p1,p2,p3);
    fclose(lg);

    char sky[100];
    sprintf(sky,"./qshell qdownload 10 forfrd.conf > .linshis");
    system(sky);
    return 0;
}





int cnilinpufriend(char *x)
{
    char sky[100];
    sprintf(sky,"./qshell fput oucjudge %s-friend.conf %s-friend.conf 'true' > .linshis",x,x);
    system(sky);
    return 0;
}

//cnilin
