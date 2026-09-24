
//Wrong Solution

#include<iostream>
using namespace std;
void buttons(int n,int a,int b,int c){
    if(n%2==0){
        if(c%2==0){
           if(b+c/2 > a+c/2){
            cout<<"Second";
            
           }
           else if(b+c/2 ==a+c/2){
            cout<<"Second";
           }
           else {
            cout<<"First";
           }
        }
        else{
            if(b+ (c+1)/2 >a+ (c)/2)   
            {
                cout<<"Second";
            }
            
            else{ cout<<"First";}
        }
    }

    else {
         if(c%2==0){
           if(a+c/2 > b+c/2){
            cout<<"First";
           }
            else if(a+c/2 == b+c/2){
            cout<<"First";
           }
           else{
            cout<<"Second";
           }
        }
         else{
            if(a+ (c+1)/2 >b+ (c)/2)   
            {
                cout<<"First";
            }
            else{ cout<<"Second";}
        }
    }
}

int main(){
    int n;
   
   int a,b,c;
   cin >>a>>b>>c;
   n=a+b+c;
   buttons(n,a,b,c);
}