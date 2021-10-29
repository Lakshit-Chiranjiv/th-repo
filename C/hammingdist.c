//hamming distance

#include <math.h>
#include <stdio.h>
long long convert(int n);
int cntdgt(long long n);
void fillarray(int n,int l,int* arr);
int solve(int x,int y,int* arrx,int* arry);

int main() {
    int a,b,h,ad,bd;
    scanf("%d%d", &a,&b);
    long long ba=convert(a);
    long long bb=convert(b);
    ad=cntdgt(ba);
    bd=cntdgt(bb);
    int ara[ad];
    int arb[bd];
    fillarray(a,ad,ara);
    fillarray(b,bd,arb);
    if(ad<=bd)
    	h=solve(ad,bd,ara,arb);
    else
    	h=solve(bd,ad,arb,ara);
    printf("\n\nhamming distance is %d",h);
    return 0;
}

long long convert(int n) {
    long long bin = 0;
    int rem, i = 1;
    while (n != 0) {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int cntdgt(long long n){
    int count = 0;
    while (n != 0) {
        n /= 10; 
        ++count;
    }
    return count;
}

void fillarray(int n,int l,int* arr) {
	int rem,i=l-1;
	while(n!=0){
		rem=n%2;
		arr[i]=rem;
		n/=2;
		i--;
	}
}

int solve(int x,int y,int* arra,int* arrb) {
	int z[y],c=0,d=0,ham=0;
	for(int i=0;i<(y-x);i++) {
		z[i]=0;
		c++;
	}
	for(int i=c;i<y;i++)
		z[i]=arra[d++];

	for(int i=0;i<y;i++) {
		if(arrb[i]!=z[i])
			ham++;
	}
	return ham;
}