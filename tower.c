#include <stdio.h>

void tower(int n, char source, char temp, char dest)
{
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, dest);
        return;
    }

    
    tower(n - 1, source, dest, temp);

   
    printf("Move disk %d from %c to %c\n", n, source, dest);

    
    tower(n - 1, temp, source, dest);
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower(n, 'A', 'B', 'C');
    return 0;
}