//student data display using nested structures
#include <iostream>
#include <string>
using namespace std;


class student
{
	string name;
	int roll;
	int marks[5];
	int total;
	double perc;

	void markspercentage()
	{

	}
};


int main()
{
	printf("enter no. of students\n");
	int n;
	cin>>n;
    struct student s[n];
    
	for(int i=0;i<n;i++)
	{
		printf("now for student %d\n",i+1);
		printf("enter roll no.\n");
		scanf("%ld",&s[i].roll);
		printf("\nenter name\n");
		char g[5];
		gets(g);
		gets(s[i].name);
		printf("\nenter date of birth in dd mm yy format\n");
        scanf("%d%d%d",&s[i].db.dd,&s[i].db.mm,&s[i].db.yy);
		printf("\nenter gender\n");
		scanf("\n%c",&s[i].gen);
		printf("\nenter marks of 5 subjects\n");
		for(int j=0;j<5;j++)
		{
			scanf("%d",&s[i].m[j]);
		    s[i].total+=s[i].m[j];
		}
		printf("\n\n");
	}	

        draw();
		printf("sl. no \t roll no. \t name \t date of birth \t gender \t marks \t\t\t\t total\n");
		draw();
	    for(int i=0;i<n;i++)
	    {
		
		    printf("%d \t %ld \t\t %s \t %d/%d/%d \t %c \t\t ",i+1,s[i].roll,s[i].name,s[i].db.dd,s[i].db.mm,s[i].db.yy,s[i].gen);
			
			for(int j=0;j<5;j++)
			    printf("%d  ",s[i].m[j]);
			printf("\t\t%d",s[i].total);
			printf("\n");
		}
			
	draw();

	printf("\n\nthe list of student names who gave failed in one or more subjects\n\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(s[i].m[j]<40)
			{
				printf("%s\n",s[i].name);
				break;
			}

		}
	}
	return 0;
}