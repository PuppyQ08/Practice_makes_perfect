//
//  main.c
//  Test
//
//  Created by QQY on 1/15/17.
//  Copyright © 2017 QQY. All rights reserved.
//

#include <stdio.h>
#define MAXLI 1000
#define LONG 8
int getfuck(char line[], int maxline);
int main()
{
    int len;
    char line[MAXLI];
    while ((len = getfuck(line, MAXLI)) > 0)
        if (len > LONG)
            printf("%s", line);
    return 0;
    
}
// get char into arrays
int getfuck(char s[], int lim)
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
