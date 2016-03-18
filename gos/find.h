
int cnilin_forfind(char *x)
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


int find(char* x)
{
    char username[100];
    FILE * lg;
    lg=fopen(".location.conf","r");
    if(lg==NULL)
    {
        printf("===== Please login first\n");
        return 0;
    }
    fscanf(lg,"%s",username);
    printf("%s\n\n",username);
    fclose(lg);

    cnilindlfriend();
    char sky[100];
    char fororder[100];
    sprintf(fororder,"%s-friend.conf",username);
    lg=fopen(fororder,"r");

    printf("%s\n",username);

    while(fscanf(lg,"%s",sky)!=EOF)
    {
        if(!strcmp(x,sky))
        {
            printf("%s is your friend,originaly\n ",x);
            return 0;
        }
        fscanf(lg,"%s",sky);
    }
    printf("ks===============================\n");
    lg=fopen("user.conf","r");
    while(fscanf(lg,"%s",sky)!=EOF)
    {
        if(!strcmp(x,sky))
        {
            fclose(lg);
            lg=fopen(fororder,"a+");
            fprintf(lg," %s ",x);
            fclose(lg);

            cnilinpufriend(username);

            printf("Successfully add %s !!\n",x);

            return 0;
        }

        fscanf(lg,"%s",sky);
    }
    fclose(lg);

    printf("Sorry,do not have this people\n");
    return 0;
}
