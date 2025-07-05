#include<bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  struct node *next;
};

void insert(node * s, int data)
{
  while(s -> next != NULL)
  {
    s = s -> next;
  }
  s -> next = (node *)malloc(sizeof(node));
  s -> next -> data = data;
  s -> next -> next = NULL;
}

void display(node * s)
{
  while(s -> next != NULL)
  {
    cout << s -> next -> data << endl;
    s = s -> next;
  }
}

void search(node *s, int data)
{
  int count = 0;
  while(s -> next != NULL)
  {
    if(s -> next -> data == data)
    count++;

    s = s -> next;
  }
  cout << "Desired Element is " << count << " th time" << endl;
}

void deleteNode(node *s, int data)
{
  while(s -> next != NULL)
  {
    if(s -> next -> data == data)
    {
      s -> next =   s -> next -> next;
      return ;
    }
    s = s -> next;
  }
}

int main()
{
node * first= (node*)malloc(sizeof(node));
first -> next = NULL;

insert(first, 9);
insert(first, 7);
insert(first, 5);
insert(first, 6);
insert(first, 3);
insert(first, 5);
insert(first, 8);




search(first, 5);

deleteNode(first,5);
deleteNode(first,9);
display(first);



return 0;    
}