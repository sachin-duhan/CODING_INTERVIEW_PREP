#include<iostream>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *newNode(int val)
{
    Node *temp = new Node();
    temp->val = val;
    temp->next = NULL;
}

Node *insertNode(Node *head, int val)
{
    Node *itr = head;
    if (!head)
    {
        head->val = val;
        head->next = NULL;
    }
    else
    {
        while (itr->next)
            itr = itr->next;
        Node *temp = newNode(val);
        itr->next = temp;
    }
    return head;
}

Node *deleteNode(int val, Node *head)
{
    Node *temp = head;
    while (temp->next || temp->next->val == val)
        temp = temp->next;
    Node *holder = temp->next->next;
    delete temp->next;
    temp->next = holder;
    return head;
}

int size(Node *head)
{
    int ans = 0;
    Node *temp = head;
    while (temp && ++ans)
        temp = temp->next;
    return ans - 1;
}
