#include<stdio.h>
#include<stdlib.h>

struct stack{
    int *arr;
    int top;
    int size;
};
int isempty(struct stack *pt){
    if(pt->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack *pt){
    if(pt->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    s->arr[0]=34;
    s->top++;
    if(isempty(s)){
        printf("stack is empty...");
    }else{
        printf("stack is not empty...");
    }
    return 0;
}