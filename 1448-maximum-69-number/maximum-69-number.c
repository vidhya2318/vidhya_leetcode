int maximum69Number (int num) {
    int n=0,c=0;
    while(num>0){
        n=n*10+num%10;
        num=num/10;
    }
    while(n>0){
        if(n%10==6 && c==0){
            c++;
            num=num*10+9;
        }
        else{
            num=num*10+n%10;
        }
       n=n/10;
    }
    return num;
}