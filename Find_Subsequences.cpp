void findSubsequences(string str, string output, int index){
  // bc
if(index>=str.length()){
// ans, jo h vo op string me build ho chuka h 
// print krdo

cout<<"->"<<output<<endl;
return;
}

char ch=str[index];

// exclude
findSubsequences(str, output, inex+1);

// include
// op str me ch char ko include kr do
output.push_back(ch);
findSubsequences(str, output, index+1);
}

int main() {
  string str="abc";
  string op="";
  int index=0;
  findSubsequences(str,op,index);
return 0;
}
