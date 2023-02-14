
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *Left;
    node *Right;
    node *Parent;

};

class Binary_Tree
{
public:
    node* root;


    BinaryTree()
    {
        root = NULL;
    }

    node *CreateNewNode(int id)
    {
        node *newnode = new node;
        newnode -> id = id;
        newnode ->Left = NULL;
        newnode ->Right = NULL;
        newnode ->Parent = NULL;

        return newnode;
    }

    void build_binary_tree()
    {
        node* allnode[6];

        for(int i=0; i<6; i++)
        {
            allnode[i] = CreateNewNode(i);
        }

        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[3];
        allnode[1]->Right = allnode[4];
        allnode[1]->Parent = allnode[0];

        allnode[2]->Right = allnode[5];
        allnode[2]->Parent = allnode[0];

        allnode[3]->Parent = allnode[1];
        allnode[4]->Parent = allnode[1];

        root = allnode[0];
    }

//    void print_tree()
//    {
//        for(int i=0; i<6; i++)
//        {
//            int p = -1;
//            int l = -1;
//            int r = -1;
//
//            if(allnode[i]->Parent != NULL)
//                p = allnode[i]->Parent->id;
//
//            if(allnode[i]->Left != NULL)
//                l = allnode[i]->Left->id;
//
//            if(allnode[i]->Right != NULL)
//                r = allnode[i]->Right->id;
//
//            cout<<"Node "<<i<<": Parent = "<<p<<" , Left child = "<<l<<" , Right child = "<<r<<"\n";
//
//        }
//    }

    void BFS()
    {
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if(a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }
            if(a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            if(a->Parent != NULL)
            {
                p = a->Parent->id;
                //     doesn't need to push into the queue because we already cross the parent. like 0 is parent of 1 & 2
            }

            cout<<"Node id = "<<a->id<<" Left Child = "<<l;
            cout<<" Right Child = "<<r<<" Parent Id = "<<p<<"\n";
        }
    }

    // DFS
    void DFS(node* a)
    {
              if(a == NULL)
                    return;

//              cout<<a->id<< " ";
              DFS(a->Left);

              DFS(a->Right);
              cout<<a->id<< " ";
    }

};

int main()
{
    Binary_Tree bt;
    bt.build_binary_tree();
    bt.DFS(bt.root);
    return 0;
}

