//subtract two distances ft and inch using structures
#include <stdio.h>
 
struct Distance
{
     int km;
     int m;
}d1,d2;

void calc(struct Distance d1,struct Distance d2 )
{
	 struct Distance d3;
     int da=(d1.km*1000)+d1.m;
     int db=(d2.km*1000)+d2.m;
     int d;
     if(da>=db)
        d=da-db;
    else
        d=db-da;
	 d3.km=d/1000;
     d3.m=d-(d3.km*1000);

    printf("\ndifference of distances=%d km %d meter",d3.km,d3.m);
}
 

int main()
{
     printf("Enter information for 1st distance\n");
     printf("Enter km: ");
     scanf("%d",&d1.km);
     printf("Enter meter: ");
     scanf("%d",&d1.m);
     printf("\nEnter information for 2nd distance\n");
     printf("Enter km: ");
     scanf("%d",&d2.km);
     printf("Enter meter: ");
     scanf("%d",&d2.m);
     calc(d1,d2);
    return 0;
}