//
//  main.c
//  Test
//
//  Created by QQY on 1/15/17.
//  Copyright © 2017 QQY. All rights reserved.
//

#include <stdio.h>
#define MAX 1000
int getfuck(char line[], int maxline);
int remo(char s[]);
int main()
{
    char line[MAX];//记得要声明个数是MAX
    while(getfuck(line, MAX) > 0)
        if(remo(line) > 0) // 我开始写的两个while。。第二个用if就好了
            printf("%s", line);
    return 0;//这个也不要忘了。。
}
// get char into arrays
int getfuck(char s[], int lim)// 将input放到一个array里然后返回其中字符的个数
{
    int c, i, j;//设置i j 的目的就是\0字符他不算word里的但是又要占一个数组的位置
    j = 0;
    for( i = 0; (c = getchar()) != EOF && c !='\n'; i++)
        if (i < lim - 2){
            s[j] = c;
            ++j;
        }
    if (c == '\n')
    {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}
int remo(char s[])//输入后先找到最后位， 然后逐个往回减，当不再是\t或空格时 直接终止 返回个数
{
    int i;
    i = 0;
    while(s[i] != '\n')
        ++i;
    --i;
    while(i > 0 && ( s[i] == '\t' || s[i] == ' '))
        --i;
    if (i > 0){
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
}









