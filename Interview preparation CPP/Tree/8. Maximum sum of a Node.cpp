Given a tree, find and return the node for which sum of data of all children and the node itself is maximum. 
In the sum, data of node itself and data of immediate children is to be taken.


TreeNode<int>* maxSumNode(TreeNode<int> *root){
    
    TreeNode<int>* ans =root;
    
    int sum=root->data; 
    for(int i=0;i<root->children.size();i++)    ///  sum for root node
    {
        sum+=root->children[i]->data;
    }
    
    
  for(int i=0;i<root->children.size();i++)
    {
         TreeNode<int>*childmax=maxSumNode(root->children[i]);  //get the max node using recursion
      
          int smallsum=childmax->data; 
          
         for(int i=0;i<childmax->children.size();i++)			// calculating sum for max node 
          {
              smallsum+=childmax->children[i]->data;
          }
      
         if(sum<=smallsum)             //comparision  update if necessary
         {
             ans=childmax;	
             sum=smallsum;                           
         }
    }
    return ans;

}