#include <iostream>
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

void swapAdjacentNodes(Node *root)
{
    Node *itr = root;
    while (itr && itr->next)
    {
        swap(itr->val, itr->next->val);
        itr = itr->next->next;
    }
}
