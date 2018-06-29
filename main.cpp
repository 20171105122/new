//
//  main.cpp
//  20171105122
//
//  Created by 冯佩玲 on 18/6/29.
//  Copyright © 2018年 冯佩玲. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

struct competitor
{
    char name[20];
    char sex[3];
    int studentID;
    int score;
    int datebirth;
    char ch[3];
    char str[10];
    int phonenumber;
    struct competitor *next;
};

int main()
{
    FILE *a;
    char s1[200];
    char s2[200];
    if ((a=fopen("/Users/20171105122a/Desktop/评分系统/评分系统/20171105122/20171105122/score.csv","r"))==0)
    {
        printf("无法打开文件\n");
    }
    else
    {
        fscanf(a,"%s ,%s",s1,s2);
        printf("%s\n%s\n",s1,s2);
    }
    return 0;
}

{
    int i,temp,n,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp*pow(10,n-i-1);
    }
    cout<<sum<<endl;
    return 0;
}

void math()
{
    int a[7];
    int i;
    float sum,max,min;
    sum=0;
    max=a[0];
    min=10;
    
    
    for(i=0;i<=6;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=6;i++)
        printf("%d\n",a[i]);
    for(i=0;i<=6;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        
    }
    
    for(i=0;i<=6;i++)
        sum=sum+a[i];
    printf("去掉一个最高分：%f，去掉一个最低分：%f，总分为：%f,average=%f\n",max,min,sum,(sum-max-min)/5);
}
