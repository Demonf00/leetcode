#include<stdio.h>
#include<stdlib.h>

int set[10];

int find(int vertex);
void unionEdge(int start, int end);


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
        unionEdge(start, end);
        fgets(buff, 4, (FILE*)fp);
    }

    start = buff[0];
    end = buff[2];
    unionEdge(start, end);

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

int find(int vertex)
{
    int now = vertex;
    int next = set[vertex];
    while(next != now)
    {
        now = next;
        next = set[now];
    }
    return now;
}

void unionEdge(int start, int end)
{
    int startRoot = find(start);
    int endRoot = find(end);
    if (startRoot == endRoot)
        return;
    set[startRoot] = end;
        return;
}