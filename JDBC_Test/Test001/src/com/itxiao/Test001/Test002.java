package com.itxiao.Test001;

public class Test002 {
    public static void main(String[] args) {
        MyThread mt1=new MyThread();
        MyThread mt2=new MyThread();

        mt1.setName("高铁");
        mt2.setName("飞机");

       //优先级问题
        //默认优先级
//        System.out.println(mt1.getPriority());
//        System.out.println(mt2.getPriority());

        //更改优先级
        //mt1.setPriority(1000);


        //设置优先级
        mt1.setPriority(5);
        mt2.setPriority(10);


        mt1.start();
        mt2.start();

    }
}
