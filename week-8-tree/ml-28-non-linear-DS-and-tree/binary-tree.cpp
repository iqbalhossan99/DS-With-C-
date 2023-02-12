#include<bits/stdc++.h>
using namespace std;

class node{
public:
                int id;
                node *Left;
                node *Right;
                node *Parent;

};

class Binary_Tree{
public:
                node* root;
                node* allnode[6];

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
//                                node* allnode[6];

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

                void print_tree()
                {
                                for(int i=0; i<6;i++)
                                {
                                                int p = -1;
                                                int l = -1;
                                                int r = -1;

                                                if(allnode[i]->Parent != NULL)
                                                                p = allnode[i]->Parent->id;

                                                if(allnode[i]->Left != NULL)
                                                                l = allnode[i]->Left->id;

                                                if(allnode[i]->Right != NULL)
                                                                r = allnode[i]->Right->id;

                                                cout<<"Node "<<i<<": Parent = "<<p<<" , Left child = "<<l<<" , Right child = "<<r<<"\n";

                                }
                }
};

int main()
{
                Binary_Tree bt;
                bt.build_binary_tree();
                bt.print_tree();
    return 0;
}

