//Simple Approach Using single queue
/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
        q2.push(x);
        for(int i=0;i<q2.size()-1;i++)
        {
            q2.push(q2.front());
            q2.pop();
        }
        
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        if(q2.empty())
        return -1;
        
        int data=q2.front();
        q2.pop();
        return data;
}