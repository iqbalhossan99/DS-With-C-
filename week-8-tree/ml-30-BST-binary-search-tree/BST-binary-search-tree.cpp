#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    int value;
    node* Left;
    node* Right;
    node* Parent;
};

class BST
{
public:
    node* root;

    BST()
    {
        root = NULL;
    }

    node* CreateNewNode(int id, int value)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->Parent = NULL;

        return newnode;
    }

    void BFS()
    {
        if(root == NULL)
            return;

        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();

            q.pop();

            int p = -1, l = -1, r = -1;

            if(a->Left != NULL)
            {
                l = a->Left->value;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r = a->Right->value;
                q.push(a->Right);
            }

            cout<< "Id: "<<a->id <<" Node value = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"\n";
        }
    }

    void InsertValue(int id, int value)
    {
        node* newnode = CreateNewNode(id, value);

        if(root == NULL)
        {
            root = newnode;
            return;
        }

        node* curr = root;
        node* prev = NULL;

        while(curr != NULL)
        {
            if(newnode->value > curr->value)
            {
                prev = curr;
                curr = curr->Right;
            }
            else
            {
                prev = curr;
                curr = curr->Left;
            }
        }

        if(newnode->value > prev->value)
        {
            prev->Right = newnode;
        }
        else
        {
            prev->Left = newnode;
        }
    }


};

int main()
{
                BST bst;
//                bst.InsertValue(0, 5);
//                bst.InsertValue(1, 8);
//                bst.InsertValue(2, 6);
//                bst.InsertValue(3,3);
//                bst.InsertValue(4,2);
//                bst.InsertValue(5,4);
//                bst.InsertValue(6,10);
//                bst.InsertValue(7,11);
                bst.InsertValue(0,6);
                bst.InsertValue(1,4);
                bst.InsertValue(2,3);
                bst.InsertValue(4, 5);
                bst.InsertValue(5,7);
                bst.InsertValue(6,8);
                bst.BFS();
    return 0;
}
