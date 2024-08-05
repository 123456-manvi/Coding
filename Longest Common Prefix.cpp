//

string longestCommonPrefix(vector<string> &arr, int n)
{
    //Write your code here

    // this is 1 approach..........
     string ans="";
    // for traverse all ch in array

    for(int i=0;i<arr[0].length();i++){
        char ch=arr[0][i];

        bool match=true;

        // travese rest of ch in string
        for(int j=1;j<n;j++){
            // not match
            if(arr[j].size() < i || ch!=arr[j][i]){
                match=false;
            break;
            }
        }
       
        if(match==false)
            break;
        
        else
            ans.push_back(ch);
       
    } 
    
    return ans;


    // now 2 approach................



}


