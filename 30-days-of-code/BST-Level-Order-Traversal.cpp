#include <iostream>
#include <vector>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;	
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }
        }

    

    void levelOrder(Node * root){
        vector<Node *> traversal;
        Node* root_pointer = root;

        while(root_pointer != NULL)
        {
            cout << root_pointer->data << ' ';

            if(root_pointer->left != NULL) 
            {
                traversal.push_back(root_pointer->left);
            } 

            if(root_pointer->right != NULL)
            {
                traversal.push_back(root_pointer->right);
            }

            if (!traversal.empty()) 
            {
                root_pointer = traversal.front();
                traversal.erase(traversal.begin());
            } else {
                root_pointer = NULL;
            }
        }
    }

    // Good way.
    /*
    void levelOrder(Node * root){
        queue<Node *> q;
        Node* n = root;
       
        while(n != NULL){
            cout << n->data << ' ';
            
            if( n->left  != NULL ) q.push(n->left);
            if( n->right != NULL ) q.push(n->right);

            if( !q.empty() ) {
                n = q.front();
                q.pop();
            } else {
                n = NULL;
            }
        }
    }

};*/
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}