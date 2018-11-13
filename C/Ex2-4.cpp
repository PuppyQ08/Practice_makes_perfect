#include<stdio.h>

int main()
{
    ;
}

void squeeze(char s1[], char s2[])
{
    int i, j;
    for (i = 0, j = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if(s1[i] != s2[i])
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}// 我这个默认了两个【】长度相同，所以要考虑长度不同的情况

void squeeze2(char s1[], char s2[])
{
    int i, j, k;
    for (i = k = 0; s1[i] != '\0'; i++){
        for ( j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
            ;
        if(s2[j] =='\0')
            s1[k++] = s1[i]; // 这句真是精髓！！！
        }
    s1[k] = '\0';

}
