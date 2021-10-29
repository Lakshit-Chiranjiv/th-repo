//employee display using structures
#include <stdio.h>
#include <string.h>
struct employee
{
	char name[100],desig[100],dept[100];
	char gender;
	int basic;
	float gross;
	
};
void draw()
{
	for(int i = 0 ; i<=100 ;i++)
		printf("*");
	printf("\n");
}
int main()
{
    float DA,HR;
    struct employee gr;
    gr.gross=0.0;
    int n;
    printf("Enter Number Of Employees : ");
    scanf("%d",&n);
    struct employee b[n];
	for(int i=0; i<n;i++)
	{
	printf("Enter employee Name : ");
    scanf(" %[^\n]%*c",b[i].name);
    printf("Enter employee Gender : ");
    scanf(" %c",&b[i].gender);
    printf("Enter employee designation : ");
    scanf(" %[^\n]%*c",b[i].desig);
    printf("Enter employee department : ");
    scanf(" %[^\n]%*c",b[i].dept);  
    printf("Enter basic pay : ");
    scanf("%d",&b[i].basic);
    DA = (75 * b[i].basic) / 100.0;
    HR = (25 * b[i].basic) / 100.0;
    b[i].gross = b[i].basic+DA+HR;
    if(gr.gross<b[i].gross)
    {
    	gr.gross=b[i].gross;
    	strcpy(gr.name,b[i].name);
    	gr.gender=b[i].gender;
    	strcpy(gr.desig,b[i].desig);
    	strcpy(gr.dept,b[i].dept);
    }
    }
    int i=0;
    draw();
    printf("\nName\tGender\tdesignation\tdepartment\tGross Pay\n");
    draw();
    for(int i=0; i<n;i++)
    {
    printf("\n%s\t%c\t%s\t\t%s\t\t%.2f\n",b[i].name,b[i].gender,b[i].desig,b[i].dept,b[i].gross);
    draw();
}
    printf("\n\nthe employee with highest salary is:\n");
    printf("\nName : %s",gr.name);
    printf("\ngender : %c",gr.gender);
    printf("\nDesignation : %s",gr.desig);
    printf("\nDepartment : %s",gr.dept);
    printf("\nSalary : %.2f",gr.gross);
	return 0;
}