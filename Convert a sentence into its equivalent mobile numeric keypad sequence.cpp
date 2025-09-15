//soln1
string printSequence(string S) {
    // code here.
    string ans="";
    int key=0;
    int count=0;
    for(int i=0;i<S.size();i++){
        if(S[i]==' ') ans.push_back('0');
        else if(S[i]>='A' && S[i]<='Z'){
            int temp=S[i]-'A';
            if(temp<18){
                key=(temp/3)+2;
                count=(temp%3)+1;
                ans+=string(count,char('0'+key));
            } else if (temp>=18 && temp<25){
                if(temp%3==0){
                    key=((temp)/3)+1;
                    if(temp==18) count=4;
                    else 
                    count=((temp-1)%3)+1;
                    ans+=string(count,char('0'+key));
                } else {
                    key=((temp-1)/3)+2;
                    count=((temp-1)%3)+1;
                    ans+=string(count,char('0'+key));
                }
            } else {
                key=9;
                count=4;
                ans+=string(count,char('0'+key));
            }
        }
    }
    return ans;
}

//soln2
string printSequence(string S) {
    string ans="";
    string str[]
        = { "2",   "22",  "222", "3",   "33",   "333", "4",
            "44",  "444", "5",   "55",  "555",  "6",   "66",
            "666", "7",   "77",  "777", "7777", "8",   "88",
            "888", "9",   "99",  "999", "9999" };
    for(int i=0;i<S.size();i++){
        if(S[i]==' ')
        ans+="0";
        else{
            ans+=str[S[i]-'A'];
        }
    }
    return ans;
}
