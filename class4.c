
//array
#include<stdio.h>
//array sum
/*
int main()
{

    int a[100],sum=0;
    int n;
    printf("Enter a array number:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
        sum = sum+a[i];
    }
    printf("%d",sum);
    return 0;
}
*/
//largest number
/*
int main ()
{
    int a[100],n,i,max=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }

    }
    printf("the largest number is %d",max);

    return 0;
}
*/
//lab test (loop).
/*
int main()
{

    int n,count=0,i;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        if(n%i==0){
            count++;
            printf("%d ",i);
        }
    }
    printf("\n%d",count);

    return 0;

}
*/
//copy print
/*
int main()
{
    int a[1000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
*/
/*
int main()
{
    int n,sum=0;
    float avarage;
    printf("Enter students:");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        printf("Enter number of student %d :",i+1);
        scanf("%d",&a[i]);
        sum = sum+a[i];

    }
     for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("total number is %d\n",sum);
    avarage = (float)sum/n;
    printf("the avarage is : %.3f",avarage);
    return 0;
}
*/

int main ()
{
    int a[100000],n,max,x,y;
    int i;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter number of student %d :",i+1);
        scanf("%d",&a[i]);
    }
    max = a[0];
    for(i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
            x=i;
        }
    }
    printf("maximum value index is : %d\n",x);

    int min = a[0];
    for(i=0; i<n; i++){
        if(a[i]<=min){
            min=a[i];
            y=1;
        }
    }
    printf("minmum value index is : %d\n",y);
    printf("the largest number is %d\n",max);
    printf("the smallest number is %d",min);

    return 0;
}
