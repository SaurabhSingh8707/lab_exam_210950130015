#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(int argc,char const*argv[])
{
    pid_t ch1;
    pid_t ch2;
    unsigned char buff;
    int fd[2];
    pipe(fd);
    ch1=fork();
    ch2=fork();
    fd[1]=open("dictionary.txt");
    if(0==ch1&&0==ch2)
    {
        while(ch2 = EOF&&ch1 !=EOF)
        {
            if(ch2=='m'|| ch1=='m')
            {
                printf("Character found\n");
            }
            else
            {
                printf("chracter not found\n");
            }
        }
    }
    return 0;

}