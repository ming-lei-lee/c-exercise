#include<stdio.h>
#define MAXTITLE 41
#define MAXAUTH 31

struct book
{
	char title[MAXTITLE];
	char author[MAXAUTH];
	double value;

};


int main(void)
{
	struct book firstBook;
	double score;
	printf("enter the score\n");
	scanf("%f",&score);
	if(score>80)
	{
		firstBook = (struct book) {"fdfs",    //复合文字  不支持？？？
			                     "fefw",
								 123};
	}
	else
	{
		
		firstBook = (struct book) {"fdffgs",
			                     "feggfw",
								 1423};
	
	
	}
	printf("the commend book is ");
	printf("%s %s %f",firstBook.title,firstBook.author,firstBook.title);
     
	return 0;



}