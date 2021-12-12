/*
Bài 2:
Tính dãy Fibonacci
F(0)=0
F(1)=1
F(n)=F(n-1)+F(n-2) (n>=2)
*/

int Fibonacci(int n){
    if(n=0) 
        return 0;
    else if(n=1)
        return 1;
    else 
        return F(n-1)+F(n-2);
}