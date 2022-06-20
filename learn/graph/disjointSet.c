#include<stdio.h>
#include<stdlib.h>

int set[10];

void add(int start, int end);

int main(void)
{
    FILE *fp = NULL;
    char buff[255];
    int start, end;


    for (int i = 0; i < 10; ++i)
        set[i] = i;
    
    fp = fopen("/edges.txt", "r");
    fgets(buff, 4, (FILE*)fp);

    while(buff[4] != EOF)
    {
        start = buff[0];
        end = buff[2];
        add(start, end);
        fgets(buff, 4, (FILE*)fp);
    }

    start = buff[0];
    end = buff[2];
    add(start, end);

    // for (int i = 0; i < 10; ++i)
    // {
    //     for (int j = 0; j < 10; ++j)
    //     {
    //         if (set[j] = i)
    //             printf("%d ", j);
    //     }
    //     printf("\n");
    // }

    while(1)
    {

    }

    return 0;
}

void add(int start, int end)
{

}