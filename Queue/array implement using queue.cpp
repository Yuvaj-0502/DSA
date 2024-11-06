#include<bits/stdc++.h>
using namespace std;

#define n 100


class queue{
    int *arr;
    int front;
    int back;

    public:
    queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void push(int x){
        if(back==n-1){
            cout<<"Queue is overflow!!"<<endl;
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1 || front>back){
            cout<<"no elements in the queue!!"<<endl;
            return ;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"no elements in the queue!!"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
    }
}

int main(){

}