//#include "Lnode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 10
#define error -1
#define error2 -2

typedef struct node
{
     int data;
     struct node * next;
}node,*Node;

//typedef node * Node;

Node InitNode(Node node)
{
    node = (Node)malloc(sizeof(node));
    if(node ==NULL)return -1;
    node -> next = NULL;
    node -> data = 0;
    return node;
}

void Input(Node node,int itera,int data)
{
    Node s = node;
    if(itera == 0){
        Node tmp  = (Node)malloc(sizeof(node));
        tmp ->data = data;
        tmp ->next = NULL;
        s -> next = tmp;
    }else{
    int j=0;
    while(s != NULL&& j < itera ){
        s = s -> next;
        j++;
    }
    if(s == NULL || j > itera ){
        printf("%d\n",error2);
        exit(0);
    }
    Node p = (Node)malloc(sizeof(node));
    p -> next = s -> next;
    s -> next = p;
    p -> data = data;
    }
}

void Get(Node *node)
{
    Node s = node;
    while(s->next!=NULL){
        s = s->next;
        printf("%d ",s->data);
    }
}

int main()
{
    Node node = InitNode(node);
    int len,i;
    int data;
    scanf("%d",&len);
    for(i=0;i<len;i++){
        scanf("%d",&data);
        Input(node,i,data);
    }
    Get(node);
}
