 int compress(vector<char>& ar) {
        int n = ar.size(), cnt = 1;
        int tmp = 0;
        for(int i=0;i<n;i++){
            if(i!= n-1 && ar[i] == ar[i+1]){
                cnt++;
                // cout<<"cnt-"<<i<<" "<<cnt<<endl;
            }
            else{
                ar[tmp] = ar[i];
                if(cnt > 1){
                    tmp++;
                    string str = to_string(cnt);
                    for(int ii=0;ii<str.size();ii++){
                        ar[tmp] = str[ii];
                        tmp++;
                    }
                }
                else {
                    tmp++;
                }
                 cnt=1;
            }
        }       

        return tmp; 
    }