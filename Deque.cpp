#include <iostream>
using namespace std;
class Queue
{
    public:
    int siz;
    int head;
    int rear;
    int *Q;
};
void add_rear(Queue *q,int x)
{
    if(q->head==(q->rear+1)%q->siz)
        cout<<"Queue is full";
    else
    {
     q->rear=(q->rear+1)%q->siz;
     q->Q[q->rear]=x;
    
    }
}
void delete_rear(Queue *q)
{
    if(q->head==q->rear)
        cout<<"Queue is full";
    else
    {
        if(q->rear==0)
        {
            q->Q[q->rear]=0;
            q->rear=q->siz-1;
        }
        else if(q->rear>0)
        {
            q->Q[q->rear]=0;
            q->rear--;
        }
    }
}
void delete_front(Queue *q)
{
    if(q->head==q->rear)
        cout<<"Queue is empty";
    else
    {
        q->head=(q->head+1)%q->siz;
        q->Q[q->head]=0;
    }
}
void display(Queue *q)
{
    int i=0;
    for(i=q->head+1;i<=q->rear;i++)
        cout<<q->Q[i]<<endl;
}
int main()
{
    int k;
    Queue q;
    cout<<"Enter queue size"<<endl;
    cin>>q.siz;
    q.Q=new int[q.siz];
    q.head=q.rear=-1;
    cout<<"Enter element"<<endl;
    for(k=0;k<=q.siz;k++)
    {
    cin>>k;
    add_rear(&q,k);
    }
    
    delete_rear(&q);
    delete_front(&q);
    display(&q);
    return 0;
}