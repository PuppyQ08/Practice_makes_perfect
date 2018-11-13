//
//  main.c
//  TempC
//
//  Created by QQY on 1/12/17.
//  Copyright © 2017 QQY. All rights reserved.
//

#include <stdio.h>

int main()
    {
        int low, high, step;
        float cel, fa;
        low = 0;
        high = 300;
        step = 20;
        cel = low;
        printf("Temp transfer\nClesius\tFahr\n");
        while ( fa <= high )
        {
            fa = cel * 9 /5 + 32; // core equation
            printf("%3.2f\t%3.2f\n", cel, fa);// print as chart form
            cel = cel + step;
        }
    }
