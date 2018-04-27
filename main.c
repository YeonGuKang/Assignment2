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
       	stat("text1", &stat1);
}

void filestat2(void)
{
        stat("text2", &stat2);
}

void filetime1(void)
{
	time1 = localtime(&stat1.st_mtime);
}

void filetime2(void)
{
	time2 = localtime(&stat2.st_mtime);
}

void sizecmp(void)
{
	printf("size compare\n");
	
	if ((int)stat1.st_size>(int)stat2.st_size) printf(" text1 is bigger\n");
	else if ((int)stat1.st_size<(int)stat2.st_size) printf("text2 is bigger\n");
	else printf("sizes are equal\n");

	return;
}

void blockcmp(void)
{
	printf("block compare\n");

	if ((int)stat1.st_blocks>(int)stat2.st_blocks) printf("text1 is bigger\n");
	else if ((int)stat1.st_blocks<(int)stat2.st_blocks) printf("text2 is bigger\n");
	else printf("blocks are equal\n");

	return;
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
