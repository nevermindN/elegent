#include <stdio.h>
#include <stdlib.h>
//definition of the node
typedef struct LinkNode
{
    char number[13];
    char name[20];
    float price;
    struct LinkNode *next;
};
struct LinkNode *Creat_One();//to creat a new node
struct LinkNode *New_link(struct LinkNode* head);//
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    struct LinkNode *p = Creat_One();
    printf("%s %s %.2f",p->number,p->name,p->price);
    free(p);
    return 0;
}
/////////////////////////////////////////////////////////////////////////////////////////
struct LinkNode *Creat_One()//to creat a new node
{
    struct LinkNode *p;
    p = (struct LinkNode*)malloc(sizeof (struct LinkNode));
    if(!p)//if p == NULL <=> !p == 1 
        printf("memory requests failed");
    else
    {
        scanf("%s%s%f\n",p->number,p->name,&p->price);
        p->next = NULL;
        return (p);
    }
}
struct LinkNode *New_link(struct LinkNode* head)
{
    struct LinkNode* count = head;
    //1st:find out the last node of the link and add a new node
    while(!(count->next))// if count->next == NULL <=> !(count->next) == 1
        count = count->next;
    count->next = Creat_One();







}
