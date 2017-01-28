#include<stdio.h>

int main()
{
    printf("signed char max = %d\n",
           (char)((unsigned char) ~0 >> 1));// 把各个二进制位转换为1 然后将结果转换为unsigned char 类型然后右移一位清除符号位 然后最后再转换为char 这样就得到了char类型字符的最大值。
    
}
