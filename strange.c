#include<stdlib.h>
#include<stdio.h>
 
void why_here(void) /*这个函数没有任何地方调用过 */
{
    printf("why u here ?!\n");
    exit(0);
}
 
int main(int argc,char * argv[])
{
    long long buff[1];
    //buff[1]=(long long)why_here;
    //buff[2]=(long long)why_here;
    buff[3]=(long long)why_here;
    return 0;
}
