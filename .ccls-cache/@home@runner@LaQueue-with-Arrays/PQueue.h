 class PQueue
{

private: 
        void ** queue;
    int start;
    int end;
    int size;
    

    public:
     PQueue()
    {
      queue = new void * [26];
    end = 0;
    start = 0;
    size = 26;
    
    
    
    }
        
    void push(void *item);
    void* top();
    void pop();
    void display();


}; 
