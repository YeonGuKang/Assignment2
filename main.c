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
}

void filestat2(void)
{
}

void filetime1(void)
{
}

void filetime2(void)
{
}

void sizecmp(void)
{
	filestat1();
	int s_text1 = (int)buf.st_size;

	filestat2();
	int s_text2 = (int)buf.st_size;

	if (s_text1>s_text2) printf(" text1 is bigger\n");
	else if (s_text1<s_text2) printf("text2 is bigger\n");
	else printf("Same size\n");

	return;
}

void blockcmp(void)
{
	filestat1();
	int b_text1 = (int)buf.st_blocks;

	filestat2();
	int b_text2 = (int)buf.st_blocks;

	if (b_text1>b_text2) printf("text1 has more blocks\n");
	else if (b_text1<b_text2) printf("text2 has more blocks\n");
	else printf("Same blocks\n");

	return;
}

void datecmp(void)
{
}

void timecmp(void)
{
}
                 
