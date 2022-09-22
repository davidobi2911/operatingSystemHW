#include <stdio.h>
#include "list.h"

int main() 
{
  printf("Write your Tests for your linked list implementation\n");
  
  list_t *mylist;
  
  mylist = list_alloc();

  list_free(mylist);
  list_add_to_back(mylist, 6);
  list_add_to_back(mylist, 3);
  list_add_to_back(mylist, 13);
  printf("/n");
  list_print(mylist);
  printf("/n");
  printf("%d\n", list_length(mylist));
  printf("\n");
  
  list_add_to_front(mylist, 0);
  printf("\n");
  list_print(mylist);
  printf("\n");
  
  list_remove_from_front(mylist);
  printf("\n");
  list_print(mylist);
  printf("\n");
  
  list_remove_from_back(mylist);
  printf("\n");
  list_print(mylist);
  printf("\n");
  
  list_add_at_index(mylist, 33, 3);
  printf("\n");
  list_print(mylist);
  printf("\n");
  
  list_remove_at_index(mylist, 1);
  printf("\n");
  list_print(mylist);
  printf("\n");
  
  list_get_elem_at(mylist, 2);
  printf("\n");
  list_print(mylist);
  printf("\n");
  
  list_get_index_of(mylist, 1);
  printf("\n");
  list_print(mylist);
  
  
  

 
}
