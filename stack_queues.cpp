#include<bits/stdc++.h>
using namespace std;

class stack_queues{
    public:
        void stack_example(){
            //LIFO
            stack <string> s;
            s.push("luffy");
            s.push("zoro");
            s.push("hancock");
            s.push("robin");
            
            cout<<"size of the stack: "<<s.size()<<endl;
            //this is how stack has to iterate, there's no other iterator
            while(!s.empty()){
                cout<<s.top()<<endl;
                s.pop();
            }
            //output: robin, hancock, zoro, luffy
        }

        void queue_example(){
            //FIFO
            queue<int>q;
            q.push(1);
            q.push(5);
            q.push(2);
            q.push(10);

            cout<<"size of queue: "<<q.size()<<endl;
            //queue iteration
            while(!q.empty()){
                cout<<q.front()<<endl;
                q.pop();
            }
            //output: 1, 5, 2, 10
        }

        void priority_queue_example(){
            //will be sorted in descending order by default
            priority_queue<int>pq;
            pq.push(400);
            pq.push(50);
            pq.push(100);
            pq.push(7);
            while(!pq.empty()){
                cout<<pq.top()<<endl;
                pq.pop();
            }
            //output: 400, 100, 50, 7
            
            priority_queue<string>pq2;
            pq2.push("luffy");
            pq2.push("hancock");
            pq2.push("zoro");
            pq2.push("robin");
            while(!pq2.empty()){
                cout<<pq2.top()<<endl;
                pq2.pop();
            }
            //output: zoro, robin, luffy, hancock
        }
};

int main()
{
    cout<<st<<endl;
    stack_queues ob;
    ob.stack_example();
    ob.queue_example();
    ob.priority_queue_example();
}
