#include <iostream>
#include <fstream>
#include "ArgumentManager.h"
using namespace std;
struct node{
  node *left;
  node *right;
  string direction;
  int val;
  node(int num, string str){
    val = num;
    left=right= nullptr;
    direction = str;
  }
};
class BST{
  node* root;
public:
  node *insert(node* root,int num, string str){
    if(root == nullptr){
      return new node(num, str);
    }
    if(num < root->val){
      root->left = insert(root->left, num, str+="l");
    }
    else if(num>root->val){
      root->right = insert(root->right,num, str+"r");
    }
    else{
      return root;
    }
    return root;
  }

  node* getRoot(){
    return root;
  } 
  void Forinsert(int num, string str){
    root = insert(getRoot(), num,str);
  }
void Pre(node* root, ofstream &COUT){
  if(root!=nullptr){
    COUT << "["<< root->direction << "] " << root->val << endl;
    Pre(root->left,COUT);
    Pre(root->right,COUT);
  }
}
BST(){
  root = nullptr;
}

};
int main(int argc, char* argv[]) {
  ArgumentManager am(argc, argv);
  const string input = am.get("input");
  const string output = am.get("output");

  ifstream fin(input);
  ofstream fout(output);
  
  BST b;
  int num;
  int i = 0;
  while(!fin.eof()){
    fin >> num;
    if(i == 0){
      b.Forinsert(num, "x");
    }
    else{
      b.insert(b.getRoot(),num, "x"); 
    }
    i++;
  }
  b.Pre(b.getRoot(),fout);
 /* b.Forinsert(9,"x");
  b.insert(b.getRoot(), 6, "x");
  b.insert(b.getRoot(),3,"x");
  b.insert(b.getRoot(),2,"x");
  b.insert(b.getRoot(),5,"x");
  b.insert(b.getRoot(),4,"x");
  b.insert(b.getRoot(),1,"x");
  b.Pre(b.getRoot()); */
  fin.close();
  fout.close();
  return 0;
}