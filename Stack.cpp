#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
}*Stack;
typedef Stack Position;

Stack InitStack(Stack st)
{
    st = (Stack)malloc(sizeof(stack));
    if(st == NULL)exit(0);
    st -> next = NULL;
    st -> data = 0;
    return st;
}
int Isempty(Stack st)
{
    return st->next == NULL;
}
void Push(Stack st,int data)
{
    Stack p = InitStack(p);
    p->data = data;
    p->next = st->next;
    st->next = p;
}

int Pop(Stack st)
{
    if(Isempty(st)){
        printf("Stack is null\n");
        return;
    }
    int data;
    Stack p = st->next;
    st->next = p->next;
    data = p->data;
    free(p);
    return data;
}

int main()
{
    Stack top,st;
    st = InitStack(st);
    top = st;
    int len,data;
    scanf("%d",&len);
    for(int i=0;i<len;i++){
        scanf("%d",&data);
        Push(st,data);
    }
    printf("%d\n",Pop(st));
    printf("%d\n",Pop(st));
    printf("%d\n",Pop(st));
}
