#include<iostream>
using namespace std;
class tree
{
    struct treenode
    {
        int info;
        struct treenode *left;
        struct treenode *right;
    };
    struct treenode *root, *ptr, *par, *temp;

    public:
    tree()
    {
        root=NULL , ptr=NULL, par=NULL, temp=NULL;
    }
        void insert(int item)
    {
        ptr=root;
        while(ptr!=NULL)
    {
        par=ptr;
        if(item<ptr->info)
        ptr=ptr->left;
        else
        ptr=ptr->right;
    }
    temp=new treenode;
    temp->info=item;
    if(par==NULL)
    root=temp;
    else
    {
        if(item<par->info)
        par->left=temp;
        else
        par->right=temp;
    }
    cout<<"Item inserted"<<endl;
    cout<<"BST inorder:";
    inorder(root);
    cout<<"\nBST preorder:";
    preorder(root);
}

    void inorder(struct treenode *ptr)
    {
        if(ptr==NULL)
        return;
        inorder(ptr->left);
        cout<<ptr->info<<" ";
        inorder(ptr->right);
    }
    void preorder(struct treenode *ptr)
    {
        if(ptr==NULL)
        return;
        cout<<ptr->info<<" ";
        preorder(ptr->left);
        preorder(ptr->right);
    }   
};

int main()
{
    tree t;
    int ch=1, item;
    while(ch)
    {
        cout<<"Enter the item to be inserted in BST:"<<endl;
        cin>>item;
        t.insert(item);
        cout<<"\nMore items?1/0:";
        cin>>ch;
    }
}

	

