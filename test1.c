void timecmp(void)
{

        if((time1->tm_hour)>(time2->tm_hour))
                printf("text2 is early\n");
        else if ((time1->tm_hour)==(time2->tm_hour))
                printf("same\n");
        else
                printf("text1 is early\n");
}

