#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "list.h"

#define error_message "Execute the program this way: ./contacts_book.out MyContacts.txt"

char* load_contacts(char[]);
int menu();
bool do_something(int);
void append_char(char*, char);

typedef struct contact
{
  char *name;
  int telephone;
  int mobilephone;
} contact;



int main(int argc, const char* argv[])
{
  if (argc < 2)
    {
      printf("%s", error_message);
      exit(0);
    }
  else
    {
      load_contacts(*argv[1]);
    }

  bool finished = false;
  while (!finished)
    {
      finished = do_something(menu());
    }
  
  return EXIT_SUCCESS;
}

char* load_contacts(char contacts[])
{
  FILE *file = fopen(*contacts, "r" );
  char buffer = '';
  char *readed_contacts = (char*) calloc(1000, sizeof(char));
  while ((c = fgetc(file)) != EOF)
    {
      append_char(readed_contacts, c);
    }
  return rearded_contacs;
}
    
