/*狼的位置是(m*i) mod n
因此，当(m*i) mod n ==1 时，
也就是说狼第n次能达到1号洞。可以证得mn的最大公约数为1.
因为若gcd(m,n)=k，设m'*k=m，n'*k=n，则(m'*k*i)mod(n'*k)=1，于是存在正整数t，使得m'*k*i=t*n'*k+1，两边同除以k得到：m'*i=t*n'+1/k。
因为m'*i和t*n'同为正整数，所以1/k为整数，因此k只能为1。以上证明过程可逆，所以若gcd(m,n)=1，则必存在i使得(m*i)mod n=1。

因此，当gcd(m,n)大于1时，有藏身地
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 1000


int gcd(int a,int b)
{
    if(a<b){
        int t = a;
        a = b;
        b = t;
    }
return b==0?a:gcd(b,a%b);

}
int main()
{
   int m;
   int n;
   int flag = 0;
   scanf("%d %d",&n,&m);
    if(gcd(n,m)>1){
        printf("有安全地点,至少1是\n");
    }else{
        printf("没有安全地点\n");
    }

}
