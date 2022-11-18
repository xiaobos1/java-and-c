package com.itxiao.Test004;

public class Box {
    //我一共有100瓶奶
    private int  milk;
    //定义一个奶箱的状态
    private boolean state=false;
    public synchronized void put(int mike){
        if(state){
            try{
                wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
        this.milk=mike;
        System.out.println("送奶工将第"+this.milk+"瓶奶放入奶箱中");

        //生产完毕修改奶箱状态
        state=true;

        //唤醒线程
        notifyAll();
    }
    public synchronized void get() {
        //如果没有等待
        if(!state){
            try {
                wait();
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }

        System.out.println("用户拿到第"+this.milk+"瓶奶");

        state=false;

        //
        notifyAll();
    }
}
