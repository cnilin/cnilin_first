int cnilin_forsign(char *x)
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

int sign(char *x,char *y)
{
//    printf("%s %s==\n",x,y);

    char dog[500];
    cnilin_forsign(dog);
    FILE *lg;
    lg=fopen("forsign.conf","w");
    char p1[100];
    char p2[20];
    char p3[20];
    sprintf(p1,"/home/cnilin/123/liaotian/QQFK");
    sprintf(p2,"user.conf");
    sprintf(p3,"user.conf");
    fprintf(lg,dog,p1,p2,p3);
    fclose(lg);
    system("./qshell qdownload 10 forsign.conf > .linshis");
    char ty[500];
    lg=fopen("user.conf","r");
    while(fscanf(lg,"%s",ty)!=EOF)
    {
  //      printf("======%s\n",ty);
        if(!strcmp(x,ty))
        {
            fscanf(lg,"%s",ty);
            if(!strcmp(y,ty))
            {
                printf("Hello %s! Welcome to qqfk !! Long time no see !!!!\n",x);

                fclose(lg);
                lg=fopen(".location.conf","w");
                fprintf(lg,"%s",x);
                fclose(lg);
                return 1;
            }
            else
            {
                printf("sorry password wrong\n");
                fclose(lg);
                return 0;
            }
        }
        else
          fscanf(lg,"%s",ty);
    }
    fclose(lg);
    char pan[3];
    printf("A new user !?! Are you register this user?(input Y or N):");
    scanf("%s",pan);

    if(pan[0]=='Y'||pan[0]=='y')
    {

        lg=fopen("user.conf","a+");
        fprintf(lg,"%s %s\n",x,y);
        fclose(lg);
        system("./qshell fput oucjudge user.conf user.conf 'true' > .linshis");
        printf("Ok,a new baby,Welcom you!\n");

        lg=fopen(".location.conf","w");
        fprintf(lg,"%s",x);
        fclose(lg);
        return 1;
    }
    else
    {
        return 0;
    }


    return 1;
}



