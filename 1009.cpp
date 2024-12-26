
// using bitwise operator
class Solution {
public:
    int bitwiseComplement(int n) { 
        int m=n;     
        int mask=0;
        if(n==0){
            return 1;
        }
        while(m!=0){
            mask =(mask << 1) | 1;
            m=m>>1;
        }
        int ans =(~n)&mask;
        return ans ;
    }
};



// using xor operator
class Solution {
public:
    int bitwiseComplement(int n) { 
        if(n==0)
        return 1;
       int x=1;
       while(x <= n){
        n=n^x;
        x=x<<1;
       }
       return n;
    }
};