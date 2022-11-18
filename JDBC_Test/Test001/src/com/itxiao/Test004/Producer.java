package com.itxiao.Test004;

public class Producer implements Runnable{
    private Box b;
    public Producer(Box b){
        this.b=b;
    }

    @Override
    public void run() {
        for(int i=1;i<=100;i++) {
            b.put(i);
        }
    }
}
