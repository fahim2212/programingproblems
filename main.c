#include<Stdio.h>
void in(int a[3][3]);
void mul(int a[3][3],int b[3][3]);
int sum(int a[3][3],int b[3][3]);
void sub(int a[3][3],int b[3][3]);
void tra(int a[3][3]);
void out(int a[3][3]);
void calc();

int main()
{
    while(1)
    {
        calc();
        printf("\n");
        printf("\n");
    }

}

void calc ()
{
     int a[3][3],b[3][3],i,j,choice;

    printf("Press 1 to add \n");
    printf("Press 2 to multiplicate \n");
    printf("Press 3 to Substract\n");
    printf("Press 4 to Transpose\n");
    printf("Enter your choice:\n");
    choice = input();

    switch (choice) {
    case 1: {
        printf("Input the First Matrix: \n");
        in(a);

        printf("Input the 2nd Matrix: \n");
        in(b);
        printf("The Sum is: \n");
        sum(a,b);
        break;
    }
    case 2: {
        printf("Input the First Matrix: \n");
    in(a);

    printf("Input the 2nd Matrix: \n");
    in(b);
    printf("The Multiplication is: \n");
       mul(a,b);
        break;
    }
    case 3: {
        printf("Input the First Matrix: \n");
    in(a);

    printf("Input the 2nd Matrix: \n");
    in(b);
    printf("The Substruction is: \n");
        sub(a,b);
        break;
    }
    case 4: {
        printf("Input the First Matrix: \n");
    in(a);
    printf("The Transpose is: \n");
        tra(a);
        break;
    }
    default:
        printf("wrong Input\n");
    }

}
int input()
{
    int number;
    scanf("%d", &number);
    return (number);
}

void output(float number)
{
    printf("%f", number);
}

void in(int a[3][3])
{
    int i,j;
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void mul(int a[3][3],int b[3][3])
{
    int multi[3][3],i,j,k;
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            multi[i][j]=0;
            for(k=0;k<=2;k++)
            {
                multi[i][j]=multi[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    out(multi);
}

int sum(int a[3][3],int b[3][3])
{
    int sum[3][3],i,j,k;
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum[i][j]=0;
            sum[i][j]= a[i][j]+b[i][j];

        }
    }
    out(sum);
}

void sub(int a[3][3],int b[3][3])
{
    int sub[3][3],i,j,k;
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sub[i][j]=0;
            sub[i][j]= a[i][j]-b[i][j];

        }
    }
    out(sub);
}

void tra(int a[3][3])
{
    int tra[3][3],i,j;
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            tra[j][i] = a[i][j];

        }
    }
    out(tra);
}

void out (int x[3][3])
{
    int i,j;
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }

}
