#ifndef BIGINTEGER_H
#define BIGINTEGER_H 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int data;
    struct node* next;
};

struct BigInteger{
    struct node* head;
    int digits,sign;
};
struct node* reverse (struct node *head);
void displayR (struct node *head);
void display (struct BigInteger A);
struct node* diff (struct node *itr1, struct node *itr2);
struct node* summ (struct node *list1, struct node *list2);
int length (struct node *head);
void result (struct node **head, int data);
struct node* convertList (char *str);
struct node* newNode (int data);
struct node* clean(struct node *head);
struct BigInteger initialize (char *s);
struct BigInteger add ( struct BigInteger A, struct BigInteger B);
struct BigInteger sub ( struct BigInteger A, struct BigInteger B);
struct BigInteger mul (struct BigInteger A, struct BigInteger B);
struct BigInteger div1 (struct BigInteger A, struct BigInteger B);
struct BigInteger mod (struct BigInteger A, struct BigInteger B);


#endif