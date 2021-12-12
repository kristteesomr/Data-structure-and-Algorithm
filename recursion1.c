
/*
Bài 1:
Hàm đệ qui tính n!

Hàm f(n)=n! được định nghĩa đệ qui như sau:
f(0)=0!=1,       n=0
f(n)=nf(n-1),    n>0       
*/


int Fact(int n){
    if(n==0) 
        return 1;
    else 
        return n*Fact(n-1);
}

int main(){
    
}



