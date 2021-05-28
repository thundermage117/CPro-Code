#include <stdio.h>

struct student
{
    int roll;
    char name[21];
    int marks;
}stud[1000],t;


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&stud[i].roll);
    for(int i=0;i<n;i++)
        scanf("%s",&(stud[i].name[0]));
    for(int i=0;i<n;i++)
        scanf("%d",&stud[i].marks);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(stud[j+1].roll<stud[j].roll)
            {
                t=stud[j];
                stud[j]=stud[j+1];
                stud[j+1]=t;
            }
        }
    }
    for(int i=0;i<n;i++)
        printf("%d %s %d\n",stud[i].roll,stud[i].name,stud[i].marks);

    return 0;
}