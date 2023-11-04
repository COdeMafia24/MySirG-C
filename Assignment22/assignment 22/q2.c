

//factorial logic
long long fact(int n){
    if(n==0 || n==1)
    return 1;
return n*fact(n-1);
}

//combination logic
long combi(int n ,int r){
    return fact(n)/fact(n-r)/fact(r);

}
