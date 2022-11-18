package com.itxiao.Test004;

public class BoxDemo {
    public static void main(String[] args) {
        Box b=new Box();

        //创建生产者对象，把奶箱对象做为构造方法参数传递，因为在这个类中要调用储存牛奶的操作
        Producer p=new Producer(b);
        //创建消费者对象
        Customer c=new Customer(b);

        Thread t1=new Thread(c);
        Thread t2=new Thread(p);

        //启动
        t1.start();
        t2.start();
    }
}
