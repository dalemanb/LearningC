#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct node
{
  void *element;
  struct node *previous;
  struct node *next;
} node;

typedef struct list
{
  node *head;
  node *tail;
  int elements_number;
} list;

node *create_node(void* element)
{
  node *new_node = (node*) calloc(1, sizeof(node));
  new_node -> element = &element;
  new_node -> previous = NULL;
  new_node -> next = NULL;

  return new_node;
}

list *create_list()
{
  list *new_list = (list*) calloc(1, sizeof(list));
  new_list -> head = NULL;
  new_list -> tail = NULL;
  new_list -> elements_number = 0;

  return new_list;
}

void add(void* element, list *my_list)
{
  node *new_node = create_node(element);

  if (my_list -> elements_number == 0)
    {
      my_list -> head = new_node;
      my_list -> tail = new_node;
    }
  else if ()
    {
      
    }
  else if ()
    {
      
    }

  (my_list -> elements_number)++;
}






