#include<stdio.h>
#define MaxSize 100
int stack[MaxSize], index1 = -1;
int main(){

    int choice;
    while(choice != 4){
        printf("1.Add Elements\n2.Delete Elements\n3.Display\n4.Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&choice);
        if(choice == 1){
            pushOP();
        }
        else if(choice == 2){
            popOP();
        }
        else if(choice == 3){
            printStack();
        }
        else if(choice == 4){
            printf("Exiting\n");
        }
        else{
            printf("You Enter wrong value!");
        }
    }

    return 0;
}
 
void pushOP(){
    int n;
    if(index1 == MaxSize-1){
        printf("Stack is overflow!\n");
    }
    else{
        printf("Enter any Element : ");
        scanf("%d", &n);
        index1++;
        stack[index1] = n;
    }
}

void popOP(){
    if(index1 == -1){
        printf("Stack is Empty!\n");
    }
    else{
        printf("Element is deleted!\n");
        stack[index1--];
    }
}

void printStack(){
    printf("----------------------\n");
    if(index1 == -1){
        printf("Stack is Empty!\n");
    }
    else{
        for(int i=0; i<=index1; i++){
            printf("%d ",stack[i]);
        }
    }
    printf("\n");
    printf("----------------------\n");
}
