





























void filestat1(void)
{

        struct stat buf1;
        struct tm* time1;

        stat("text1", &buf1);
        time = localtime(&buf1.st_mtime);
        printf("size : %d \n", (int)buf1.st_size);
        printf("blocks : %d \n", (int)buf1.st_blocks);
        printf("month : %d \n", time1->tm_mon+1);
        printf("date : %d \n", time1->tm_mday);
        printf("hour : %d \n", time1->tm_hour);
        printf("min : %d \n", time1->tm_min);
}

