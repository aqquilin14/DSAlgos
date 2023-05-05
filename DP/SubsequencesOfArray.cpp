void printSubsequences(int arr[], int index,
                       vector<int> &subarr,int n)
{
    // Print the subsequence when reach
    // the leaf of recursion tree
    if (index == n)
    {
         for (auto it:subarr){
           cout << it << " ";
          
         }
      if(subarr.size()==0)
        cout<<"{}";
       
      cout<<endl;
      return;
 
         
    }
    else
    {
       //pick the current index into the subsequence.
        subarr.push_back(arr[index]);
       
 
         printSubsequences(arr, index + 1, subarr,n);
 
         
        subarr.pop_back();
       
      //not picking the element into the subsequence.
        printSubsequences(arr, index + 1, subarr,n);
    }
    
}
