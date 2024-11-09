
#include<stdio.h>
#include<unistd.h>

int main (){

    int size , element , pos , i ;

    printf("Enter the size of array :\n");
        scanf("%d",&size);

    int arr[size];

    printf("Enter the element of array :\n");
        for ( i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
    
    printf("Your  array is :\n");
        for ( i = 0; i < size; i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\nEnter the position where you want to insert :\n");
        scanf("%d",&pos);
        if(pos<1 || pos>size)
        {
            printf("Invalid position");
            return(1);
        }
    printf("\nEnter the element you want to insert :\n");
        scanf("%d",&element);
    
   
    
    for ( i = size+1; i >=pos; i--)  
    {                                   
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;                 

    printf("The array has updated ...\n");
        sleep(2);
        
    printf("This is your new array  : \n");
        for ( i = 0; i < size+1; i++)
        {
            printf("%d\t",arr[i]);
        }
        printf("\n");
        
  return 0;
}
