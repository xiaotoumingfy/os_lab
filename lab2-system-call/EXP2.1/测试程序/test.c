#define __LIBRARY__	/*_syscallx生效*/
#include <unistd.h>
#include<stdio.h>
#include<string.h>

_syscall1(int,print_val,int,a);	/*用户空间的接口函数*/
_syscall3(int,str2num,char *,str,int,str_len,long *,ret);

int main(){
    char str[10];
    long a;
    long *ret = &a;
    printf("Give me a string:\n");
    scanf("%s",str);
    str2num(str,strlen(str),ret);	/*调用str2num*/
    print_val((int)a);	/*调用print_val*/
    return 0;
}
