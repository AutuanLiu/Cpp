#include "stdio.h"
#include "stdlib"
#define  MAX  100
typedef SeqStack{
    int MAXNUM;
    int t;
    int *data;
}Stack;
typedef  Stack *stack;

stack *create(int m){
    stack s=(Stack *)malloc(sizeof(stack));
    if(s){
        s->data=(int*)malloc(sizeof(int)*m);
        if(s->data){
            s->t=-1;
            s->MAXNUM=m;
            return s;
        }
        else 
            free(stack);}
    else{
        printf("out of space!\n");
        return NULL
    }
}
int isEmpty(stack s){
    if (s->t==-1)
        return 1;
    else
        return 0;
}

void push(stack s,int x){
    if(s->t>=MAXNUM-1)
        printf("OverFlow!\n");
    else
    {
        s->t=s_>t+1;
        s->s[S->t]=x;
    }
}

void pop(stack s){
    if(s->t==-1)
        printf("UnderFlow!\n");
    else
        s->t=s->t-1;
}

int top(stack s){
    if(s->t==-1)
        printf("The stack is empty!\n");
    else
        return(s->s[s->t]);
}

void print(Stack s){
    while(s->t!=-1)
        printf("%d",top(s));
}

int choice(){
    printf("please enter your choice:");
    int choices;
    scanf("%d",&choices);
    if(choices<=3&&chioces>=1)
        return choices;
    else
        printf("Errer!please enter again!\n");
}

void main(){
    int num;
    printf("please enter the number you wantan convert:");
    scanf("%d",&num);
    printf("            menu            \n");
    printf("\n");
    printf("1            10 -- 2         \n");
    printf("2            10 -- 8         \n");
    printf("3            10 -- 16        \n");
    while(true){
        switch(choice()){
            case 1:{ 
                       Stack s=create(MAX);
                       while(true){
                           push(s,num%2);
                           num=num/2;
                       }
                       print(s);
                       break;}    
            case 2:{ 
                       Stack s=create(MAX);
                       while(true){
                           push(s,num%8);
                           num=num/8;
                       }
                       print(s);
                       break;}        
            case 3:{ 
                       Stack s=create(MAX);
                       while(true){
                           push(s,num%16);
                           num=num/16;
                       }
                       print(s);
                       break;}        
        }
    }
}


