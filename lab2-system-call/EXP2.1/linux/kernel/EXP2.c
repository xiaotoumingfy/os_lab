#define __LIBRARY__
#include<linux/kernel.h>
#include<asm/segment.h>  /*定义了get_fs_byte()和set_fs_byte()*/
int sys_print_val(int a){
    printk("in sys_print_val:%d\n",a);
    return 0;
}
/*作为os实验，重在实现系统调用，不考虑负数情况*/
int sys_str2num(char *str,int str_len,long *ret){
    if(str_len >=8)
	return -1; /*超过10^8*/
    int i;
    int result = 0;
    for(i=0;i<str_len;i++)
	result = 10*result+(get_fs_byte(str+i)-'0');
    put_fs_long(result,ret);
    return 0;
}
