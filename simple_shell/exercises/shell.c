#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork & wait example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t child1, child2;//, child3, child4, child5 ;
    int status;
    char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};

    child1 = fork();
    if (child1 == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child1 == 0)
    {
        printf("Wait for me, wait for me\n");
	printf("Before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
        sleep(3);
    }
    else
    {
        wait(&status);
        printf("Oh, it's all better now child1\n");
    }
    child2 = fork();
    if (child2 == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child2 == 0)
    {
        printf("Wait for me, wait for me child2\n");
        printf("Before execve\n");
        if (execve(argv[0], argv, NULL) == -1)
        {
                perror("Error:");
        }
        printf("After execve\n");
        sleep(3);
    }
    else
    {
        wait(&status);
        printf("Oh, it's all better now child2\n");
    }



        child3 = fork();
    if (child2 == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child2 == 0)
    {
        printf("Wait for me, wait for me child2\n");
        printf("Before execve\n");
        if (execve(argv[0], argv, NULL) == -1)
        {
                perror("Error:");
        }
        printf("After execve\n");
        sleep(3);
    }
    else
    {
        wait(&status);
        printf("Oh, it's all better now child2\n");
    }


    child4 = fork();
    if (child2 == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child2 == 0)
    {
        printf("Wait for me, wait for me child2\n");
        printf("Before execve\n");
        if (execve(argv[0], argv, NULL) == -1)
        {
                perror("Error:");
        }
        printf("After execve\n");
        sleep(3);
    }
    else
    {
        wait(&status);
        printf("Oh, it's all better now child2\n");
    }

    child5 = fork();
    if (child2 == -1)
    {
        perror("Error:");
        return (1);
    }
    if (child2 == 0)
    {
        printf("Wait for me, wait for me child2\n");
        printf("Before execve\n");
        if (execve(argv[0], argv, NULL) == -1)
        {
                perror("Error:");
        }
        printf("After execve\n");
        sleep(3);
    }
    else
    {
        wait(&status);
        printf("Oh, it's all better now child2\n");
    }



    return (0);
}
