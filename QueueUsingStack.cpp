//Simple Solution
class Queue {
    stack<int> input, output;
public:

    void enqueue(int x) {
        
        while(!output.empty())
        {
            input.push(output.top());
            output.pop();
        }
        
        input.push(x);
        
        while(!input.empty())
        {
            output.push(input.top());
            input.pop(); 
        }
        
    }

    int dequeue() {
        if(output.empty())
        return -1;
        
        int data=output.top();
        output.pop();
        return data;
        
    }
};