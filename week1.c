#include <stdio.h>
#include <stdlib.h>
#define max 5
struct Stack{
int stack[max];
int top;

int Push(int item,int *top){
if (*top==max-1){
    printf("Stack is overflow");
    return 0;
}
*top++;
printf("pushed item : %d \n",item);
stack[*top]=item;
return 0;
}

int Pop(int *top){
if (*top==-1){
    printf("Stack is underflow \n");
    return 0;
}
printf("Item removed : %d \n",stack[*top]);
//stack[top].remove;
for (int i = *top; i <= *top; i++) {
        stack[i] = stack[i + 1];
}
*top--;
return 0;
}

int Display(int *top){
if (*top==-1){
    printf("Stack is empty \n");
    return 0;
}
printf("stack items : \n");
for (int i=*top;i>=0;i--){
printf("%d \n",stack[i]);
}
return 0;
}
}

int main(){
    for(;;){
    struct Stack s1;
    int choice,item;
    int top=-1;
    printf("1. Push 2. Pop \n 3. Display 4. Exit \n");
    printf("Enter your choice :");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("enter your item :");
        scanf("%d",item);
        s1.Push(item,top);
        break;
    case 2:
        s1.Pop(top);
        break;
    case 3:
        s1.Display(top);
        break;
    case 4:
        exit(0);
    default:
        printf("invalid choice");
    }
    }
return 0;
}
