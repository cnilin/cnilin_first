
int msg(char *n1,char *n2,char *ns)
{
    struct tm *timeinfo;
    time_t nowtime;
    time(&nowtime);
    timeinfo=localtime(&nowtime);

    int YEAR=timeinfo->tm_year+1900,MONTH=timeinfo->tm_mon+1,DAY=timeinfo->tm_mday,HOUR=timeinfo->tm_hour,MIN=timeinfo->tm_min,SEC=timeinfo->tm_sec;
    char goalname[100];
    sprintf(goalname,"%s-%04d%02d%02d%02d%02d%02d-%s-%05d.msg",n2,YEAR,MONTH,DAY,HOUR,MIN,SEC,n1,flag%100000);
    FILE *lg;
    lg=fopen(goalname,"w");
    fprintf(lg,"%s",ns);
    fclose(lg);
    char sky[200];
    sprintf(sky,"./qshell fput oucjudge %s %s 'true' > .linshis",goalname,goalname);
    system(sky);
    return 1;
}
