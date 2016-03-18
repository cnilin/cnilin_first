
/*int frd()
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

    char p2[100];
    sprintf(p2,"%s-friend.conf",username);

    cnilindlfriend();
    char sky[100];


    char forput[100];
    int i=1;
    lg=fopen(p2,"r");

    while(fscanf(lg,"%s",forput)!=EOF)
    {
        printf("%d==%s\n",i,forput);
        i++;
    }
    fclose(lg);

    return 0;
}*/
