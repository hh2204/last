#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include "task 7.h"
int main()
{
    int count = 0;
    char  lname[10];
    for (int i = 0; i < 10; i++)
    {
        int length = strlen(student[i].name);

        for (int i = 0; i < length/2 ; i++) {
            char c = student[i].name;
            student[i].name = student[length - i - 1].name;
            student[length - i - 1].name = c;
        }
        printf("%s", student[i].name);
        //for (int n = 0;n < 30;n++)
        //{
        //    if (isspace(student[i].name[n]) )  student[i].lname[n] = student[i].name[n];
        //    else student[i].lname[n] = student[i].name[n];
        //    printf("%s\t", student[i].lname);
       // }
        //_strrev(student[i].lname);
        //printf("%s\t", student[i].lname);
    }
    return 0;

}

