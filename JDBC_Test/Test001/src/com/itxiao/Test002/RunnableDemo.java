package com.itxiao.Test002;

public class RunnableDemo {
    public static void main(String[] args) {
        //创建MyRunnable类的对象
        MyRunnable mr=new MyRunnable();
        //创建Thread对象，把MyRunnable当做构造方法的参数
        Thread t1=new Thread(mr,"高铁");
        Thread t2=new Thread(mr,"飞机");


        //启动线程
        t1.start();
        t2.start();
    }
}
