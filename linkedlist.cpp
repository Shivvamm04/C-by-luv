#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *first;
    struct Node *second;
    struct Node *third;

    head = (struct Node *)malloc(sizeof(struct Node));
    first = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = first;

    first->data = 9;
    first->next = third;

    third->data = 10;
    third->next = NULL;

    struct Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data<<" ";
        ptr = ptr->next;
    }

    struct Node * newl = (struct Node*)malloc(sizeof(struct Node));
    newl->data = 150;
    newl->next = second->next;
    second->next = newl;

    ptr = head;
    cout<<endl;
    while (ptr != NULL)
    {
        cout << ptr->data<<" ";
        ptr = ptr->next;
    }
}