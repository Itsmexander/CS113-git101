int bar(int a, int b)
    {
        int x, y;

        x = 444;
        y = a + b;
        return y;
    }

    void foo()
    {  
        int result;

        result = 1;
        result = bar(111, 222);
    }