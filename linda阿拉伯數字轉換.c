//
//  linda阿拉伯數字轉換.c
//  linda換鈔
//
//  Created by Linda on 2020/2/14.
//  Copyright © 2020年 Linda. All rights reserved.
//

#include "linda阿拉伯數字轉換.h"
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    
    int number,hun,ten,per;
    // 0零 1壹 2貳 3參 4肆 5伍 6陸 7柒 8捌 9玖 _0拾
    // hun=number/100; ten=(number-hun*100)/10; per=(number-hun*100-ten*10)/1
    printf("0-999阿拉伯數字轉換<->正體中文數字:\n");
    scanf("%d",&number);
    
    hun=number/100;
    ten=(number-hun*100)/10;
    per=(number-hun*100-ten*10)/1;
    
    switch(hun)
    {
            
        case 1:
            printf("壹佰");
            break;
        case 2:
            printf("貳佰");
            break;
        case 3:
            printf("參佰");
            break;
        case 4:
            printf("肆佰");
            break;
        case 5:
            printf("伍佰");
            break;
        case 6:
            printf("陸佰");
            break;
        case 7:
            printf("柒佰");
            break;
        case 8:
            printf("捌佰");
            break;
        case 9:
            printf("玖佰");
            break;
    }
    
    if(number>100)
    {
        if(per>0)
        {
            printf("零");
        }
    }
    
    switch(ten)
    {
        case 1:
            printf("壹拾");
            break;
        case 2:
            printf("貳拾");
            break;
        case 3:
            printf("參拾");
            break;
        case 4:
            printf("肆拾");
            break;
        case 5:
            printf("伍拾");
            break;
        case 6:
            printf("陸拾");
            break;
        case 7:
            printf("柒拾");
            break;
        case 8:
            printf("捌拾");
            break;
        case 9:
            printf("玖拾");
            break;
    }
    
    switch(per)
    {
        case 1:
            printf("壹");
            break;
        case 2:
            printf("貳");
            break;
        case 3:
            printf("參");
            break;
        case 4:
            printf("肆");
            break;
        case 5:
            printf("伍");
            break;
        case 6:
            printf("陸");
            break;
        case 7:
            printf("柒");
            break;
        case 8:
            printf("捌");
            break;
        case 9:
            printf("玖");
            break;
    }
    printf("元整");
    return 0;
}
