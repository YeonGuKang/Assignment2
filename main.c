#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

struct stat stat1, stat2;
struct tm *time1, *time2;

void filestat1(void);
void filestat2(void);
void filetime1(void);
void filetime2(void);
void sizecmp(void);
void blockcmp(void);
void datecmp(void);
void timecmp(void);

int main(void)
{
	filestat1();
	filestat2();
	filetime1();
	filetime2();
	sizecmp();
	blockcmp();
	datecmp();
	timecmp();
}

void filestat1(void)
{
        struct stat buf1;
        stat("text1", &buf1);
}

void filestat2(void)
{
        struct stat buf2;
        stat("text2", &buf2);
}

void filetime1(void)
{
}

void filetime2(void)
{
}

void sizecmp(void)
{
}

void blockcmp(void)
{
}

void datecmp(void)
{

	if((time1->tm_mon+1)>(time2->tm_mon+1))
                printf("text2 is early\n");
        else if ((time1->tm_mon+1)<(time2->tm_mon+1))
                printf("text1 is early\n");
        else if ((time1->tm_mon+1)==(time2->tm_mon+1))
        {
                if((time1->tm_mday)>(time2->tm_mday))
                         printf("text2 is early\n");
                else if ((time1->tm_mday)<(time2->tm_mday))
                         printf("text1 is early\n");
                else
                         printf("same date\n");

        }


}

void timecmp(void)
{
	if((time1->tm_hour)>(time2->tm_hour))
                printf("text2 is early\n");
        else if ((time1->tm_hour)<(time2->tm_hour))
                printf("text1 is early\n");
        else if ((time1->tm_hour)==(time2->tm_hour))
        {
                if((time1->tm_min)>(time2->tm_min))
                         printf("text2 is early\n");
                else if ((time1->tm_min)<(time2->tm_min))
                         printf("text1 is early\n");
                else
                         printf("same tiem\n");

	 }
}
