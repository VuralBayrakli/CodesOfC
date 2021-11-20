#include <stdio.h>
#include <stdlib.h>
struct node {

   int veri;
   int indis;
   struct node *link;
};

int count = 0;
struct node *head = NULL;
struct node *current = NULL;

void insertList(int a, int b) {
   //create a link
   struct node *List = (struct node*) malloc(sizeof(struct node)); // yeni liste

   List->indis = a;
   List->veri = b;

   //point it to old first node
   List->link = head;

   //point first to new first node
   head = List;
   (count)++;
}


int main()
{
       insertList(1,10);
       insertList(2,20);
       insertList(3,30);
       insertList(4,1);
       insertList(5,40);
       insertList(6,56);
       insertList(7,67);
       insertList(8,77);
       insertList(9,67);
       insertList(10,457);

       printf("length: %d", count);
}
