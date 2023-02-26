#include<bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node* Left;
    node* Right;
};

class BST
{
public:
    node *root;
    BST()
    {
        //Write your code here
        root = NULL;
    }

    node* CreateNewNode(int value)
    {
        node* newNode = new node;
        newNode->value = value;
        newNode-> Left = NULL;
        newNode-> Right = NULL;

        return newNode;
    }

    void Insert(int value)
    {
        //Write your code here
        node* newNode = CreateNewNode(value);
        if(root == NULL)
        {
            root = newNode;
            return;
        }

        node* curr = root;
        node* prev = NULL;

        while(curr != NULL)
        {
                        if(newNode->value > curr->value)
                        {
                                        prev = curr;
                                        curr = curr->Right;
                        }else{
                                prev = curr;
                                curr = curr ->Left;
                        }
        }

        if(newNode->value > prev->value)
           {
                           prev ->Right = newNode;
           }else{
                prev -> Left = newNode;
           }

    }

 bool Search(int value)
    {
        node* cur = root;
       while( cur != NULL)
       {
                       if(value > cur->value)
                       {
                                       cur = cur->Right;
                       }else if(value < cur->value){
                                cur = cur->Left;
                       }else{
                          return      true;
                       }
       }
       return false;
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

            cout<< " Node value = "<<a->value<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<"\n";
        }
    }
};

int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    bst.BFS();
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0

    return 0;
}
