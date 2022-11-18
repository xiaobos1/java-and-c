package com.itxiao.Test001;

public class Test003 {
    public static void main(String[] args) {
        MyThread mt1=new MyThread();
        MyThread mt2=new MyThread();


        //点名
        mt1.setName("关羽");
        mt2.setName("张飞");


        //设置主线刘备
        Thread.currentThread().setName("刘备");
        //设置守护线程
        mt1.setDaemon(true);
        mt2.setDaemon(true);

        mt1.start();
        mt2.start();

//        for(int i=0;i<78;i++){
//            System.out.println(Thread.currentThread().getName()+":"+i);
//        }


    }
}
