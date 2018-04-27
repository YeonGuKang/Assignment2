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
	struct stat buf1;
	struct tm* time1;
	time1 = localtime(&buf1.st_mtime);
}

void filetime2(void)
{
	struct stat buf2;
	struct tm* time2;
	time2 = localtime(&buf2.st_mtime);
}

void sizecmp(void)
{
	printf("size compare\n");
	
	filestat1();
	int s_text1 = (int)buf.st_size;

	filestat2();
	int s_text2 = (int)buf.st_size;

	if (s_text1>s_text2) printf(" text1 is bigger\n");
	else if (s_text1<s_text2) printf("text2 is bigger\n");
	else printf("sizes are equal\n");

	return;
}

void blockcmp(void)
{
	printf("block compare\n");

	filestat1();
	int b_text1 = (int)buf.st_blocks;

	filestat2();
	int b_text2 = (int)buf.st_blocks;

	if (b_text1>b_text2) printf("text1 is bigger\n");
	else if (b_text1<b_text2) printf("text2 is bigger\n");
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
