/*
一座山周围有n个洞，顺时针编号0,1,2,3,4....n-1。一狼从0洞开始，顺时针计数，经过第m个洞时，进洞找兔子。例如n=5，m=3，狼经过的洞依次为0,3,1,4,2,0
输入m,n。试问兔子有没有幸免的机会，如果有，该藏在哪。
*/
/*采用了线性表的方法，空间开销比较大，循环占用的时间开销也不小。待优化*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 1000
int main()
{

   int* area = (int*)malloc(sizeof(int)*MAXSIZE);
   for(int i=0;i<MAXSIZE;i++)
    area[i]=0;
   int m;
   int n;
   int flag = 0;
   scanf("%d %d",&n,&m);
   for(int i=0;area[0]<2;i++){
        int temp = (m*i)%n;//狼的位置每次都是   m*i mod n
        area[temp] += 1;
       // printf(" %d \n",temp);
   }

   for(int i=0;i<n;i++){
    if(area[i]==0){
            printf("%d\n",i);
            flag = 0;
            break;
    }else{
            flag = 1;
    }
   }
   if(flag == 1){
    printf("没有安全地点\n");
   }

}
