//
//  main.c
//  Test
//
//  Created by QQY on 1/15/17.
//  Copyright © 2017 QQY. All rights reserved.
//

#include <stdio.h>
#define MAXHIST 15 //直方图长度
#define MAXWORD 11 // 允许的单词最长长度
#define IN 1
#define OUT 0

int main()
{
    int c, i, j, nc, state; //basic variations
    int maxvalue; // 直方图最长的长度
    int ovflow; // 超出最大长度的单词数
    int wl[MAXWORD];//数组形式存储各长度的单词的个数
    state = OUT;
    nc = 0;
    ovflow = 0;
    for ( i = 0; i < MAXWORD;  ++i)
        wl[i] = 0;// give array a value.
    
    while ((c = getchar()) != EOF)   // next is basic counting
        if ( c == ' ' || c == '\t'|| c == '\n')
        {
            state = OUT;
            if ( nc > 0)
            {
                if ( nc < MAXWORD)
                    ++ wl[nc]; // count the number of nc length
                else
                    ++ ovflow;// count the number of overflowed words
            }
            nc = 0; // remember to be back to 0 when done with counting
        }
        else if ( state == OUT){
            state = IN;
            nc = 1; // Don't forget it... need to count by nc
        }else
            ++nc;
    // next is printing the counting result in a histogram
    
    // geting the maxvalue
    maxvalue = 0;
    for (i = 0; i < MAXWORD; ++i)
        if ( wl[i] >= maxvalue)
            maxvalue = wl[i];
    // print out histogram, really hard to think up
    for ( i = MAXHIST; i > 0 ; --i){
        for ( j = 1; j < MAXWORD; ++j)
            if ( wl[j] * MAXHIST / maxvalue >= i)
                printf("*");
            else
                printf(" ");
        putchar('\n');
    }
    for ( i = 1 ; i < MAXWORD; ++i)
        printf("%4d", i);
    putchar('\n');
    for ( i = 1; i < MAXWORD; ++i)
        printf("%4d", wl[i]);
    putchar('\n');
        
}
